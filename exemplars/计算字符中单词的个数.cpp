#include<stdio.h>
int main()
{
	int flag=0,i=0,num=0;
	char words[90];
	printf("请输入一串英文单词:\n");
	gets(words);
	puts(words);
	for(i=0;words[i]!='\0';i++)
	{
		if(words[i]==' ')    //若if条件满足，则else if中即使满足也不会执行 
		{
			flag=0;
		}
		else if(flag==0)
		{
			flag=1;
			num++;
		}
	}
	printf("该字符串中含有的单词个数为:%d\n",num);
	return 0;
} 





