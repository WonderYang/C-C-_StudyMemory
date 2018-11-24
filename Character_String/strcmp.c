#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2);
int main()
{
	char* s1 = "aabbcdf";
	char* s2 = "aabbcd";
	printf("%d\n", my_strcmp(s1, s2));
	return 0;
}
/*最佳方法*/ 
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	
	int ret = 0;
	while (!(ret=*(unsigned char*)str1 - *(unsigned char*)str2) && *str1)   //别忘了加*啊啊啊； 
	{
		str1++; 
		str2++;
	}
	if (ret > 0)
	{
		ret = 1;
	}
	else if(ret < 0)
	{
		ret = -1;
	}
	return ret;
}

/*普通方法*/ 
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 || *str2)
//	{
//		if (*str1 > *str2)
//		return 1;
//		else if (*str1 < *str2)
//		return -1;
//		else
//		{
//			str1++,str2++;
//		}
//	}
//	return 0;
//}



	
	
	
