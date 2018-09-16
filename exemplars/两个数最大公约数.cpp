#include<stdio.h>
int largest(int a,int b);
int main()
{
	int x,y,z;
	printf("求两个数的最大公约数:\n\n");
	printf("请输入两个数：\n");
	scanf("%d%d",&x,&y);
	printf("这两个数的最大公约数为:%d\n",largest(x,y));
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

