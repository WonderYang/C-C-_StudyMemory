/*调整数组使奇数全部都位于偶数前面。

题目：

输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分*/
#include<stdio.h>
void exchange(int* p, int sz);
void my_scanf(int *p, int sz);
void my_printf(int* p, int sz);
int main()
{
	int arr[5] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_scanf(arr, sz);
	exchange(arr, sz);
	my_printf(arr, sz);
}
void my_scanf(int* p, int sz)
{
	int *str = p;
	for (; str < p + sz; str++)
	{
		scanf("%d", str);       //注意这里是str，不是&str；
	}
}
void my_printf(int* p, int sz)
{
	int *str = p;
	for (; str < p + sz; str++)
	{
		printf("%d  ", *str);
	}
}
void exchange(int* p, int sz)
{
	int* str = p + sz - 1;
	int* s = p;
	for (; str >= p; str--)
	{
		if (*str % 2 != 0)          //当初写成*str / 2...... 
		{
			for (; s < str; s++)
			{
				if (*s % 2 == 0)
				{
					int swap = 0;
					swap = *str;
					*str = *s;
					*s = swap;
					break;
				}
			}
		}
	}
}
