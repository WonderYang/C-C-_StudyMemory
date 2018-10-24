/*用迭代方法计算*/
#include<stdio.h>
int main()
{
	int x = 0;
	printf("请输入你要求的第n个斐波那契数:\n");
	scanf("%d",&x);
	long next = 1;
	long previous = 1;
	long result = 1;
	while (x > 2)
	{
		x--;
		previous = next;
		next = result;
		result = next + previous;
	}
	printf("斐波那契数为：%ld\n", result);
	return 0;
}


/* 计算斐波那契数用递归是一个极大的错误，浪费内存超级恐怖*/
//#include<stdio.h>
//long fibonacci(int n);
//int main()
//{
//	int x = 0;
//	printf("请输入你要求的第n个斐波那契数:\n");
//	scanf("%d",&x);
//	printf("第%d个斐波那契数为：%d\n", x, fibonacci(x));
//	return 0;
//} 
//
//long fibonacci(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibonacci(n-1)+fibonacci(n-2);
//	}
//}
