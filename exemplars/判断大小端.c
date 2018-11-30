#include<stdio.h>
/*判断大小端第一种方法*/
int main()
{
	int i = 1;
	if(*(char*)&i == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
} 

/*第二种方法*/
//union UN          //联合体共享一块内存 
//{
//	int i;
//	char c;	
//};
//int main()
//{
//	union UN un;
//	un.i = 1;
//	if (un.c == 1)
//	printf("小端\n");
//	else
//	printf("小端\n");
//	return 0;
//}
