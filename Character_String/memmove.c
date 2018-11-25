#include<stdio.h>
#include<assert.h>
#include<string.h>
void* my_memmove(void* dst, const void* src, int count);
int main()
{
	char arr[20] = "lalafas";
	char *s = "lalalalal";
	printf("%s", my_memmove(arr, s, strlen(s) + 1));

	//printf("%s\n", my_memmove(arr + 1, arr, strlen(arr) + 1));  //�͵�ַ��ߵ�ַ���������뷴�򿽱�����ȻȫΪl
	//printf("%s\n", my_memmove(arr, arr + 1, strlen(arr) + 1));  //�ߵ�ַ��͵�ַ����

	//printf("%s\n", memmove(arr, arr + 1, strlen(arr) + 1));  
	//printf("%s\n", memmove(arr+1, arr, strlen(arr) + 1));

	//����������䲻��ͬʱ���ԣ���Ϊÿһ�����ִ����֮���ı�arr����


	//return 0;
}
void* my_memmove(void* dst, const void* src, int count)
{
	assert(dst && src);

	void* ret = dst;
	if ((dst > src) && ((char*)dst < (char*)src + count))   //�͵�ַ��ߵ�ַ���� ,��Ҫ���򿽱�
	{
		dst = (char*)dst + count - 1;
		src = (const char*)src + count - 1;
		while (count--)
		{
			*(char*)dst = *(char*)src;                 //д��  dst = *(char*)src; ���о���
			dst = (char*)dst - 1;                    //�����Ƕ�ָ�����
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

