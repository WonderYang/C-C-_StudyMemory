 #pragma warning(disable:4996)
/*实现一个函数，判断一个数是不是素数*/
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



/*创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。 */
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
//	printf("请输入数字来完成对应功能:\n");
//	while (x)
//	{
//		menu();
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 0:
//			printf("!!!!!!退出!!!!!\n");
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
//			printf("输入错误，请重新选择：\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//void menu()
//{
//	printf("1. 初始化数组\n");
//	printf("2. 清空数组\n");
//	printf("3. 完成数组元素的逆置\n");
//	printf("0. 退出\n");
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


/*实现一个函数判断year是不是润年*/
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



/*使用函数实现两个数的交换*/
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





/*实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。*/
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