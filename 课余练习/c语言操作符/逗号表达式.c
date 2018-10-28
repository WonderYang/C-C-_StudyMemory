#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a>b, a=b+10, a, b=a+1);  
	printf("c=%d\n",c);   //13
	
	if (a>100, b>0, a>10)         //此时a的值为12 
	printf("yes\n");   //会输出yes 
	return 0;
}
