#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a>b, a=b+10, a, b=a+1);  
	printf("c=%d\n",c);   //13
	
	if (a>100, b>0, a>10)         //��ʱa��ֵΪ12 
	printf("yes\n");   //�����yes 
	return 0;
}
