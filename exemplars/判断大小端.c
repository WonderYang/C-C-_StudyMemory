#include<stdio.h>
/*�жϴ�С�˵�һ�ַ���*/
int main()
{
	int i = 1;
	if(*(char*)&i == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
} 

/*�ڶ��ַ���*/
//union UN          //�����干��һ���ڴ� 
//{
//	int i;
//	char c;	
//};
//int main()
//{
//	union UN un;
//	un.i = 1;
//	if (un.c == 1)
//	printf("С��\n");
//	else
//	printf("С��\n");
//	return 0;
//}
