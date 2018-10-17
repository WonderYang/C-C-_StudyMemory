 #pragma warning(disable:4996)
/*递归方式实现打印一个整数的每一位*/
//#include<stdio.h>
//void print(int x);
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	print(x);
//	return 0;
//}
//void print(int x)
//{
//	if (x > 0)
//	{
//		print(x / 10);
//		printf("%d  ", x % 10);
//	}
//	/*else                         //else这一步多余的
//		printf("%d  ", x);*/
//}




/*递归和非递归分别实现求n的阶乘*/
//#include<stdio.h>
//int main()
//{
//	int fac = 1;
//	int x = 0;
//	scanf("%d", &x);
//	while (x>1)
//	{
//		fac = fac*x;
//		x--;
//	}
//	printf("阶乘为%d\n", fac);
//	return 0;
//}



//int fac(int x);
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("阶乘为：%d\n", fac(x));
//	return 0;
//}
//int fac(int x)
//{
//	if (x > 1)
//	{
//		return x*fac(x - 1);
//	}
//	else
//		return 1;
//}



/*递归和非递归分别实现strlen */
//#include<stdio.h>
//int my_strlen(char* str);
//int main()
//{
//	char arr[] = "i love you";
//	printf("  %d  \n", my_strlen(arr));
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str+1);
//}

//#include<stdio.h>
//int my_strlen(char* str);
//int main()
//{
//	char arr[] = "i love you";
//	printf("  %d  \n", my_strlen(arr));
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int num = 0;
//	while (*str != '\0')
//	{
//		num++;
//		str++;
//	}
//	return num;
//}



/*编写一个函数reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中
的字符串操作函数。 */
//#include<stdio.h>
//void reverse_string(char * string);
//int main()
//{
//	char arr[] = "i love you";
//	reverse_string(arr);
//	return 0;
//}
//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//		reverse_string(string+1);
//		putchar(*string);
//	}
//	//else
//	//{
//	//	putchar(*string);
//	//}
//}




/*写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 */
//#include<stdio.h>
//void DigitSum(int n);
//int main()
//{
//	int n = 0;
//	scanf("请输入你要分解的数:\n");
//	scanf("%d", &n);
//	DigitSum(n);;
//	return 0;
//}
//void DigitSum(int n)
//{
//	int sum = 0;
//	if (n > 9)
//	{
//		DigitSum(n / 10);
//		printf("+%d", n % 10);
//		sum = sum + n % 10;
//	}
//	else
//	{
//		printf("%d", n);
//		sum = sum + n;
//	}
//}



/*编写一个函数实现n^k，使用递归实现 */
//#include<stdio.h>
//int n_k(int n, int k);
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n和k：\n");
//	scanf("%d%d", &n, &k);
//	printf("%d的%d次方为: %d\n", n, k, n_k(n, k));
//	return 0;
//}
//int n_k(int n, int k)
//{
//	if (k > 0)
//		return n*n_k(n, k - 1);
//	else
//		return 1;
//}


/*求斐波那契数的迭代方法*/
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int old = 1;
//	int new = 1;
//	int value = 1;
//	while (n - 2 )
//	{
//		n--;
//		old = new;
//		new = value;
//		value = old + new;
//	}
//	printf("斐波那契数为%d\n",value);
//	return 0;
//}


/*斐波那契数的递归求法（耗内存极大）*/
//#include<stdio.h>
//int fib(int n);
//int main()
//{
//	int n = 0;
//	printf("输入你要求的第n个斐波那契数:\n");
//	scanf("%d", &n);
//	printf("第%d个斐波那契数为%d\n",n, fib(n));
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}