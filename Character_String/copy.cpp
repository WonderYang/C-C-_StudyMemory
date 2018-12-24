#include<stdio.h>
/*程序功能：
将b中字符串按所输入个数复制到a字符串中，若b字符串长度小于n，则补NUL字符（即'\0'） 
*/
int main()
{
	int copy_n(char x[],char y[],int n);
	int num;
	char a[20]="0";
	char b[]="i also 0 love you";
	printf("输入你想要复制字符串的个数：\n");
	scanf("%d",&num);
	copy_n(a,b,num);
	printf("%s\n",a);
	
} 
int copy_n(char x[],char y[],int n)
{
	int i=0,j=0; 
	for(i=0;i<n;i++)
	{
		x[i]=y[j];
		if(y[j]!='\0')    //这里是'\0',而不是字符'0'; 
		j++;
	}
}
