#include<stdio.h>
int main()
{
	int a=0;
	int n=0;
	int i=0;
	int tmp=0;
	int sum=0;
	printf("������a��n���������б��ʽ:\n  a+aa+aaa...(n)=?\n");
	scanf("%d%d",&a,&n);
	for(i=0;i<n;i++)
	{
		tmp=tmp*10+a;
		sum+=tmp;
	}
	printf("���Ϊ��%d\n",sum);
	return 0;
}
