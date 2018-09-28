#include<stdio.h>
int main()
{
	int a=0;
	int n=0;
	int i=0;
	int tmp=0;
	int sum=0;
	printf("请输入a和n，来求下列表达式:\n  a+aa+aaa...(n)=?\n");
	scanf("%d%d",&a,&n);
	for(i=0;i<n;i++)
	{
		tmp=tmp*10+a;
		sum+=tmp;
	}
	printf("结果为：%d\n",sum);
	return 0;
}
