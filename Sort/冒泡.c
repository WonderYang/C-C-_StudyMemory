#include<stdio.h>
/*
	ð������������Ƚ������ƣ���һ�ֵõ����/��Сֵ���浽�������һλ���ڶ���
	ǰ�������±Ƚϵõ������ڶ�λ��ֵ���Դ�����......(���Եڶ���ѭ����ÿһ����
	���Ǵ�j=0��ʼ�Ƚ�) 
*/ 
int main()
{
	int i,j,a,b,w;
	printf("����������Ҫ�ŵĸ���\n");
	scanf("%d",&w); 
	int shuzu[w];
	printf("������%d������\n",w);
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
	printf("��%d������С�����˳��Ϊ��\n",w);
	for(b=0;b<w;b++)
	{
		printf("%5d",shuzu[b]);
	}    
} 
