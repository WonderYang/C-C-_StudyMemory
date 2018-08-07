#include<stdio.h>
/*
	冒牌排序是逐个比较往后推，第一轮得到最大/最小值保存到数组最后一位，第二轮
	前面又重新比较得到倒数第二位的值，以此类推......(所以第二个循环中每一大轮
	都是从j=0开始比较) 
*/ 
int main()
{
	int i,j,a,b,w;
	printf("请输入你想要排的个数\n");
	scanf("%d",&w); 
	int shuzu[w];
	printf("请输入%d个数：\n",w);
	for(i=0;i<w;i++)
		scanf("%d",&shuzu[i]);
	printf("\n");
	for(i=0;i<w-1;i++)
	for(j=0;j<w-1-i;j++)
	{
		if(shuzu[j]>shuzu[j+1])
		{
			a=shuzu[j];
			shuzu[j]=shuzu[j+1];
			shuzu[j+1]=a;
		}
	}
	printf("这%d个数从小到大的顺序为：\n",w);
	for(b=0;b<w;b++)
	{
		printf("%5d",shuzu[b]);
	}    
} 
