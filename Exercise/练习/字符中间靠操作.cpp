#include<stdio.h>
#include<windows.h>
int main()
{
	char a[] = "welcome to bite";
	char b[] = "***************";
	int lg = sizeof(a) / sizeof(a[0]);  //Ҳ����strlen������ֻ��������������������Ϊ15��������\0" 
	//printf("%d\n", lg);              //��strlen�������ü�ͷ�ļ�#include<string.h> 
	int i = 0,j=0;
	printf("%s\n", b);
	for (i = 0; i < lg / 2; i++)
	{
		Sleep(300);
		system("cls");
		b[i] = a[i];
		b[lg - i-2] = a[lg - i-2];
		printf("%s\n", b);	
	}
}
