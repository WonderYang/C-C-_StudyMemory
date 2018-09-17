#include<stdio.h>
int main()
{
	int a=5,b=10;
	printf("a=%d    b=%d\n\n",a,b);
	/*二进制法*/
	a=a^b;
	b=a^b;   //按位异或 
	a=a^b;
	printf("a=%d    b=%d\n\n",a,b);
	/*方法二*/
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d    b=%d\n\n",a,b);
	
} 
