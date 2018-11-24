#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dst, const void* src, int count);
int main()
{
	char s[10];
	char *str = "as davs";
	printf("%s", my_memcpy(s, str, strlen(str)+1));
	return 0;
}
void* my_memcpy(void* dst, const void* src, int count)
{
	assert( dst);
	assert(src);
	
	char* ret = (char*) dst;
	while (count--)
	{
		*(char*)dst = *(const char*)src;
		++(char*)dst;    //若果是后置加加，则会先执行++，此时dst还是void*类型，不能执行加加，则会报错 
		++(const char*)src;  //这里在dev编译器中要后置++，在VS2013下需要前置加加；（why？） 
	}
	return ret;
	
}
