#include<stdio.h>
#define N 100
int findmax(int a[],int n);
int main()
{
	int i,n,a[N];
	printf("������Ҫ�ҵ����ĸ����� ");
	scanf("%d",&n);
	printf("\n������Щ��:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("��Щ����������Ϊ:%d",findmax(a,n)); 
}
findmax(int a[],int n)
{
	int max;
	if(n<=1)
	return a[0];
	else
	{
		max=findmax(a,n-1);              //����a[n-1]����ǰ��n-1��������������ȽϴӶ��ó������ 
		return a[n-1]>=max?a[n-1]:max;   //��ǰ��������������߿ɵ��ô˺��� 
	}
}
