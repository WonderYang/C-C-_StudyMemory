#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dst, const char* src)
{
    assert(dst);
    assert(src);
    
    char* dst_ = dst;
    const char* src_ = src;
    while(*dst_++ = *src_++);    //�������Ҫ�зֺţ���Ȼ��д���ټ�һ��������  
    return dst;
}
int main()
{
	char s[] = "aaaa";
	char a[10];
	printf("%s", my_strcpy(a, s));
	return 0;
}
