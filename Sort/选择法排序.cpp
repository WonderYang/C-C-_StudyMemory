#include<stdio.h>
int main()
{
	int shuzu[5];
	int i,j,a,t;
	printf("please enter five figers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&shuzu[i]);
	}
	for(i=0;i<5;i++)
	{
		a=i;
		for(j=i+1;j<5;j++)
		{
			if(shuzu[j]<shuzu[a])
			a=j;
		} 
		t=shuzu[a];
		shuzu[a]=shuzu[i];
		shuzu[i]=t;
		
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",shuzu[i]);
	}
		
}
