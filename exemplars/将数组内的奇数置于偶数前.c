/*��������ʹ����ȫ����λ��ż��ǰ�档

��Ŀ��

����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿��*/
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
		scanf("%d", str);       //ע��������str������&str��
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
		if (*str % 2 != 0)          //����д��*str / 2...... 
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
