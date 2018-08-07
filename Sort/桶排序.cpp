#include<stdio.h>
int main()
{
	int i,j,a,t,s; 
	int shuzu[1000]={}; //定义一个全为0的大数组
	printf("输入你想要排序的个数：  ");
	scanf("%d",&a);
	while(a<=0)
	{
		printf("请重新输入，该输入有误\n");
		scanf("%d",&a);
	}
	printf("请输入%d个要排的数:\n",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&t);
		shuzu[t]++;
	}
	printf("请选择升序还是降序排列:\n");
	printf("升序请输入1,降序请输入2\n");
	printf("请输入:");
	scanf("%d",&s);
	switch(s)
	{
		case 1:									
			printf("\n");								
			printf("桶排序-升序排列结果为：\n");				
			for (i=0;i<1000;i++)							
				for(j=0;j<shuzu[i];j++)	 
					printf("%d\t",i);
		break;
		
		case 2:																
			printf("\n");								
			printf("桶排序-降序排列结果为：\n");					
			for (i=999;i>=0;i--)						
				for(j=0;j<shuzu[i];j++)	
					printf("%d\t",i);
		break;
		
		
		default:
			printf("\n");
			printf("输入有误");
				
	}
}	
	
	
	
	
	
	
	
	
	 
	
	

