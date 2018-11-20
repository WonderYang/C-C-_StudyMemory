#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dst, const char* src)
{
    assert(dst);
    assert(src);
    
    char* dst_ = dst;
    const char* src_ = src;
    while(*dst_++ = *src_++);    //这里必须要有分号，不然就写成再加一个大括号  
    return dst;
}
int main()
{
	char s[] = "aaaa";
	char a[10];
	printf("%s", my_strcpy(a, s));
	return 0;
}
