#include<stdio.h>
int main()
{
	int flag=0,i=0,num=0;
	char words[90];
	printf("������һ��Ӣ�ĵ���:\n");
	gets(words);
	puts(words);
	for(i=0;words[i]!='\0';i++)
	{
		if(words[i]==' ')    //��if�������㣬��else if�м�ʹ����Ҳ����ִ�� 
		{
			flag=0;
		}
		else if(flag==0)
		{
			flag=1;
			num++;
		}
	}
	printf("���ַ����к��еĵ��ʸ���Ϊ:%d\n",num);
	return 0;
} 





