 #pragma warning(disable:4996)
/*两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:
1999 2299
输出例子:7  */
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < 32; i++)
//	{
//		if ((m >> i & 1) ^ (n >> i & 1))
//		{
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}



/*输出一个整数的每一位*/
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	return 0;
//}




/*获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列 */
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	printf("这个数二进制位的偶数位为:\n");
//	for (i = 31; i >= 1; i -= 2)        //偶数位
//	{
//		printf("%d  ", (x >> i) & 1);
//	}
//	printf("\n--------------------------\n");
//	printf("这个数二进制位的奇数位为:\n");
//	for (i = 30; i >= 0; i -= 2)        //奇数位
//	{
//		printf("%d  ", (x >> i) & 1);
//	}
//	return 0;
//}



/*写一个函数返回参数二进制中 1 的个数 */
//方法三
//#include<stdio.h>
//int count_one_bits(int value)
//{
//	int count = 0;
//	while (value)
//	{
//		count++;
//		value = value&(value - 1);
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("please enter a figer>\n");
//	scanf("%d", &num);
//	ret = count_one_bits(num);
//	printf("count=%d\n", ret);
//	return 0;
//}


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