#include<stdio.h>
int main()
{
	int a=5,b=10;
	printf("a=%d    b=%d\n\n",a,b);
	/*�����Ʒ�*/
	a=a^b;
	b=a^b;   //��λ��� 
	a=a^b;
	printf("a=%d    b=%d\n\n",a,b);
	/*������*/
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d    b=%d\n\n",a,b);
	
} 
