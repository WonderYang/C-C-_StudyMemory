#include<stdio.h>
#include<assert.h>
#include<string.h>
void* my_memmove(void* dst, const void* src, int count);
int main()
{
	char arr[20] = "lalafas";
	char *s = "lalalalal";
	printf("%s", my_memmove(arr, s, strlen(s) + 1));

	//printf("%s\n", my_memmove(arr + 1, arr, strlen(arr) + 1));  //低地址向高地址拷贝，必须反向拷贝，不然全为l
	//printf("%s\n", my_memmove(arr, arr + 1, strlen(arr) + 1));  //高地址向低地址拷贝

	//printf("%s\n", memmove(arr, arr + 1, strlen(arr) + 1));  
	//printf("%s\n", memmove(arr+1, arr, strlen(arr) + 1));

	//上面四条语句不能同时测试，因为每一条语句执行完之后会改变arr数组


	//return 0;
}
void* my_memmove(void* dst, const void* src, int count)
{
	assert(dst && src);

	void* ret = dst;
	if ((dst > src) && ((char*)dst < (char*)src + count))   //低地址向高地址拷贝 ,需要反向拷贝
	{
		dst = (char*)dst + count - 1;
		src = (const char*)src + count - 1;
		while (count--)
		{
			*(char*)dst = *(char*)src;                 //写成  dst = *(char*)src; 会有警告
			dst = (char*)dst - 1;                    //这里是对指针进行
			src = (char*)src - 1;
		}
	}
	else
	{
		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	return ret;

}

