#include<stdio.h>
#define N 100
void rd(int a[],int n,int k);
int main()
{
	int n,a[N];
	printf("请输入你要分解的数:  ");
	scanf("%d",&n);
	a[0]=n;
	printf("\n%d的所有不增和式为:\n",n);
	rd(a,n,1);
}
void rd(int a[],int i,int k)
{
	int j,p;
	for(j=i;j>=1;j--)
	{
		if(j<=a[k-1])       //如果这个和数小于上一次分解的和数 
		{
			a[k]=j;
			if(j==i)       //说明已经分解完成 
			{
				printf("%d=%d",a[0],a[1]);
				for(p=2;p<=k;p++)
				printf("+%d",a[p]);
				printf("\n");
			} 
			else
			rd(a,i-j,k+1);
		}
	}
} 




