#include<stdio.h>
/*�����ܣ�
��b���ַ�����������������Ƶ�a�ַ����У���b�ַ�������С��n����NUL�ַ�����'\0'�� 
*/
int main()
{
	int copy_n(char x[],char y[],int n);
	int num;
	char a[20]="0";
	char b[]="i also 0 love you";
	printf("��������Ҫ�����ַ����ĸ�����\n");
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
		if(y[j]!='\0')    //������'\0',�������ַ�'0'; 
		j++;
	}
}
