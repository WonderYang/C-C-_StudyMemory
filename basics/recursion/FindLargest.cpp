#include<stdio.h>
#define N 100
int findmax(int a[],int n);
int main()
{
	int i,n,a[N];
	printf("输入你要找的数的个数： ");
	scanf("%d",&n);
	printf("\n输入这些数:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("这些数中最大的数为:%d",findmax(a,n)); 
}
findmax(int a[],int n)
{
	int max;
	if(n<=1)
	return a[0];
	else
	{
		max=findmax(a,n-1);              //采用a[n-1]来与前面n-1个数的最大者来比较从而得出最大者 
		return a[n-1]>=max?a[n-1]:max;   //而前面所有数的最大者可调用此函数 
	}
}
