/*写一个函数返回参数二进制中 1 的个数 */
//方法三
#include<stdio.h>
int count_one_bits(int value)
{
	int count = 0;
	while (value)
	{
		count++;
		value = value&(value - 1);
	}
	return count;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("please enter a figer>\n");
	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("count=%d\n", ret);
	return 0;
}


/*写一个函数返回参数二进制中 1 的个数 */
//方法二
//#include<stdio.h>
//int count_one_bits(unsigned int value);
//int main()
//{
//	int x = 0;
//	printf("please enter a figer>\n");
//	scanf("%d", &x);
//	printf("这个数二进制为1的位数为：%d个\n", count_one_bits(x));
//	return 0;
//}
//int count_one_bits(unsigned int value)
//{
//	int i = 32;
//	int count = 0;
//	while (i)
//	{
//		i--;
//		if (1 == value % 2)
//			count++;
//		value /= 2;
//	}
//	return count;
//}



/*写一个函数返回参数二进制中 1 的个数 */
//方法一
//#include<stdio.h>
//int count_one_bits(unsigned int value);
//int main()
//{
//	int x = 0;
//	printf("please enter a figer>\n");
//	scanf("%d", &x);
//	printf("这个数二进制为1的位数为：%d个\n", count_one_bits(x));
//	return 0;
//}
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	int i = 32;
//	while (i)
//	{
//		if (1 == (value & 1))
//			count++;
//		value >>= 1;
//		i--;
//	}
//	return count;
//}
