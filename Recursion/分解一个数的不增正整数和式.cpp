#include<stdio.h>
#define N 100
void rd(int a[],int n,int k);
int main()
{
	int n,a[N];
	printf("��������Ҫ�ֽ����:  ");
	scanf("%d",&n);
	a[0]=n;
	printf("\n%d�����в�����ʽΪ:\n",n);
	rd(a,n,1);
}
void rd(int a[],int i,int k)
{
	int j,p;
	for(j=i;j>=1;j--)
	{
		if(j<=a[k-1])       //����������С����һ�ηֽ�ĺ��� 
		{
			a[k]=j;
			if(j==i)       //˵���Ѿ��ֽ���� 
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




