#include<stdio.h>
#include<assert.h>
#include<string.h>
const char* my_strstr(const char* str, const char* sub_str)   //注意返回值也要const，不然会有警告 
{
	const char* str_ = str;
	const char* sub_str_ = sub_str;
	while (*str_)
	{
		str_ = str;
		sub_str_ = sub_str;
		while ((*sub_str_==*str_) && *sub_str_ && *str_)
		{
			sub_str_++, str_++;
		}
		if (*sub_str_ == '\0')
		return str;
		str++;
	}
	
	return NULL;
}
int main()
{
	char s1[] = "aaaaabcdef";
	char s2[] = "abcde";
	printf("%s\n", my_strstr(s1, s2));
	//printf("%s\n", strstr(s1, s2));
	return 0;
} 
