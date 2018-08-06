#include<stdio.h>
long factorial(int n);  //防止数据溢出，所以定义函数用long 
int main()
{
	int n;
	printf("****************求一个数的阶乘****************\n\n"); 
	printf("请输入你要求的数:");
	scanf("%d",&n);
	printf("%d的阶乘为:%d",n,factorial(n));
}
long factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1); 
}
