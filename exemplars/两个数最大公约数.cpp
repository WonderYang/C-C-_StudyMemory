#include<stdio.h>
int largest(int a,int b);
int main()
{
	int x,y,z;
	printf("�������������Լ��:\n\n");
	printf("��������������\n");
	scanf("%d%d",&x,&y);
	printf("�������������Լ��Ϊ:%d\n",largest(x,y));
	printf("%d",5%8);
}
largest(int a,int b)
{
	int n;
	n=a;
	do
	{
		a=b;
		b=n;
		n=a%b;
	}while(n); 
	return b;
	
}

