#define  _CRT_SECURE_NO_WARNINGS 1

/*��������ʹ����ȫ����λ��ż��ǰ�档

��Ŀ��

����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿��*/
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
//		scanf("%d", str);       //ע��������str������&str��
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


/*//���Ͼ���
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
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
		printf("�ҵ���\n");
	else
		printf("û���ҵ�\n");
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
