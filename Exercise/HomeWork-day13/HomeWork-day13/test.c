#define  _CRT_SECURE_NO_WARNINGS 1

/*调整数组使奇数全部都位于偶数前面。

题目：

输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分*/
//#include<stdio.h>
//void exchange(int* p, int sz);
//void my_scanf(int *p, int sz);
//void my_printf(int* p, int sz);
//int main()
//{
//	int arr[5] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_scanf(arr, sz);
//	exchange(arr, sz);
//	my_printf(arr, sz);
//}
//void my_scanf(int* p, int sz)
//{
//	int *str = p;
//	for (; str < p + sz; str++)
//	{
//		scanf("%d", str);       //注意这里是str，不是&str；
//	}
//}
//void my_printf(int* p, int sz)
//{
//	int *str = p;
//	for (; str < p + sz; str++)
//	{
//		printf("%d  ", *str);
//	}
//}
//void exchange(int* p, int sz)
//{
//	int* str = p + sz - 1;
//	int* s = p;
//	for (; str >= p; str--)
//	{
//		if (*str % 2 != 0)
//		{
//			for (; s < str; s++)
//			{
//				if (*s % 2 == 0)
//				{
//					int swap = 0;
//					swap = *str;
//					*str = *s;
//					*s = swap;
//					break;
//				}
//			}
//		}
//	}
//}


/*//杨氏矩阵
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);
*/
#include<stdio.h>
#define ROW 3
#define COL 3
int FindNum(int(*p)[3], int row, int col, int num);
int main()
{
	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	printf("please enter->\n");
	int num = 0;
	scanf("%d", &num);
	int ret = FindNum(arr, ROW, COL, num);
	if (ret)
		printf("找到了\n");
	else
		printf("没有找到\n");
	return 0;
}
int FindNum(int(*p)[3], int row, int col, int num)
{
	int x = 0;
	int y = col - 1;
	while (x < row && y >= 0)
	{
		if (num < p[x][y])
			y--;
		else if (num > p[x][y])
			x++;
		else
			return 1;
	}
	return 0;
}
