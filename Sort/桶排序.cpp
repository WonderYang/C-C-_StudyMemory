#include<stdio.h>
int main()
{
	int i,j,a,t,s; 
	int shuzu[1000]={}; //����һ��ȫΪ0�Ĵ�����
	printf("��������Ҫ����ĸ�����  ");
	scanf("%d",&a);
	while(a<=0)
	{
		printf("���������룬����������\n");
		scanf("%d",&a);
	}
	printf("������%d��Ҫ�ŵ���:\n",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&t);
		shuzu[t]++;
	}
	printf("��ѡ�������ǽ�������:\n");
	printf("����������1,����������2\n");
	printf("������:");
	scanf("%d",&s);
	switch(s)
	{
		case 1:									
			printf("\n");								
			printf("Ͱ����-�������н��Ϊ��\n");				
			for (i=0;i<1000;i++)							
				for(j=0;j<shuzu[i];j++)	 
					printf("%d\t",i);
		break;
		
		case 2:																
			printf("\n");								
			printf("Ͱ����-�������н��Ϊ��\n");					
			for (i=999;i>=0;i--)						
				for(j=0;j<shuzu[i];j++)	
					printf("%d\t",i);
		break;
		
		
		default:
			printf("\n");
			printf("��������");
				
	}
}	
	
	
	
	
	
	
	
	
	 
	
	

