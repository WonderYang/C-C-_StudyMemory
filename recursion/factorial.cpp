#include<stdio.h>
long factorial(int n);  //��ֹ������������Զ��庯����long 
int main()
{
	int n;
	printf("****************��һ�����Ľ׳�****************\n\n"); 
	printf("��������Ҫ�����:");
	scanf("%d",&n);
	printf("%d�Ľ׳�Ϊ:%d",n,factorial(n));
}
long factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1); 
}
