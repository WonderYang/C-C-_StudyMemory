#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);   //1 2 3 4

	i = a++ || ++b || d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);  //1 3 3 4
	return 0;
} 
