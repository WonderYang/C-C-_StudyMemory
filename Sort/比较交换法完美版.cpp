#include<stdio.h>
/*
	比较交换法不同于冒泡排序法的是：比较交换法是每轮比较得到最大/最小的值放在数组
	第一位开始，依次得到大小顺序从数组第一个存放起走，从而得到完整顺序。 
	比较的时候是每位数依次与“最”前面一位进行比较。（最是指这一轮当中最前一位，
	而不是第一位） 
*/ 
int main()
{
	int x,i,j,k,t;
	printf("请输入你要排序的数的个数:\n");
	scanf("%d",&x);
	int shuzu[x];
	printf("请输入你要排序的数:\n");
	for(i=0;i<x;i++)
	scanf("%d",&shuzu[i]);
	/*          输入部分                          */
	
	for(j=0;j<x-1;j++)
		for(k=j+1;k<x;k++)
		{
			if(shuzu[k]<shuzu[j])    //别忘了把if语句括起来啊 
			{
			t=shuzu[k];
			shuzu[k]=shuzu[j];
			shuzu[j]=t;
			}
		}
	/*    比较部分   */	
	for(i=0;i<x;i++)
	printf("%4d",shuzu[i]);
		
		
		
}
