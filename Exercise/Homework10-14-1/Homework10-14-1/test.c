 #pragma warning(disable:4996)
/*ʵ��һ���������ж�һ�����ǲ�������*/
#include<stdio.h>
#include<math.h>
int is_prime(int x);
int main()
{
	int x = 0;
	scanf("%d", &x);
	if (is_prime(x))
	{
		printf("yes\n");
	}
	else
		printf("no\n");
	return 0;
}
int is_prime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
			return 0;
	}
	return 1;
}



/*����һ�����飬
ʵ�ֺ���init������ʼ�����顢
ʵ��empty����������顢
ʵ��reverse���������������Ԫ�ص����á�
Ҫ���Լ���ƺ����Ĳ���������ֵ�� */
//#include<stdio.h>
//void menu();
//void init(int* p, int size);
//void reverse(int* p, int size);
//void empty(int* p, int size);
//void print(int* p, int size);
//int main()
//{
//	int x = 1;
//	int arr[6] = { 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(arr, size);
//	printf("��������������ɶ�Ӧ����:\n");
//	while (x)
//	{
//		menu();
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 0:
//			printf("!!!!!!�˳�!!!!!\n");
//			break;
//		case 1:
//			init(arr,size);
//			break;
//		case 2:
//			empty(arr,size);
//			break;
//		case 3:
//			reverse(arr,size);
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//void menu()
//{
//	printf("1. ��ʼ������\n");
//	printf("2. �������\n");
//	printf("3. �������Ԫ�ص�����\n");
//	printf("0. �˳�\n");
//}
//
//void init(int* p,int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		scanf("%d", p + i);
//	}
//	printf("\n");
//	print(p, size);
//}
//
//void empty(int* p, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		*(p+i)=0;
//	}
//	print(p, size);
//}
//
//void reverse(int* p, int size)
//{
//	int i = size - 1;
//	for (i = size - 1; i >= 0; i--)
//		printf("%d  ", *(p + i));
//	printf("\n");
//}
//
//void print(int* p, int size)
//{
//	int* str = p;
//	for (; str < p + size; str++)
//		printf("%d  ", *str);
//	printf("\n");
//}


/*ʵ��һ�������ж�year�ǲ�������*/
//#include<stdio.h>
//int is_year(int year);
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_year(year))
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}
//int is_year(int year)
//{
//	if ((year % 400) == 0 || (year % 4 == 0 && year % 100 != 0))
//		return 1;
//	return 0;
//}



/*ʹ�ú���ʵ���������Ľ���*/
//#include<stdio.h>
//void swap(int* x, int* y);
//int main()
//{
//	int x = 3;
//	int y = 5;
//	printf("x=%d   y=%d", x, y);
//	swap(&x, &y);
//	printf("\nx=%d   y=%d", x, y);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int value = 0;
//	value = *x;
//	*x = *y;
//	*y = value;
//}





/*ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���*/
//#include<stdio.h>
//void mul(int x);
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	mul(x);
//	return 0;
//}
//void mul(int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i*j);
//		}
//		printf("\n");
//
//	}
//}