#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* p1, const char* p2);
int main()
{
	char arr[] = "abcd";
	char* p = "ef";
	printf("%s\n", my_strcpy(arr, p));
	return 0;
}
char* my_strcpy(char* p1, const char* p2)
{
	assert(p1);
	assert(p2);
	char *p = p1;
	while (*p2)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	return p;
}
