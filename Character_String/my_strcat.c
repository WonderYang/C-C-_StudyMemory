#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dst, const char* src)
{
    assert(dst);
    assert(src);
    
    char* dst_ = dst;
    const char* src_ = src;
    while(*dst_)
    {
        dst_++;
    }
    while(*dst_ = *src_)
    {
    	dst_++, src_++;
	}
	return dst;
}

int main()
{
	char s[] = "aaaa";
	char a[] ="bbbb";
	printf("%s", my_strcat(a, s));
	return 0;
}
