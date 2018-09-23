#include<stdio.h>
#include<windows.h>
int main()
{
	char a[] = "welcome to bite";
	char b[] = "***************";
	int lg = sizeof(a) / sizeof(a[0]);  //也可用strlen函数，只不过这个函数测出来长度为15，不包括\0" 
	//printf("%d\n", lg);              //用strlen函数还得加头文件#include<string.h> 
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
