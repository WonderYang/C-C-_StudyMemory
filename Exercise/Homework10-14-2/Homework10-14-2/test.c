 #pragma warning(disable:4996)
/*�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ*/
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
//	/*else                         //else��һ�������
//		printf("%d  ", x);*/
//}




/*�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�*/
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
//	printf("�׳�Ϊ%d\n", fac);
//	return 0;
//}



//int fac(int x);
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("�׳�Ϊ��%d\n", fac(x));
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



/*�ݹ�ͷǵݹ�ֱ�ʵ��strlen */
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



/*��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C��������
���ַ������������� */
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




/*дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 */
//#include<stdio.h>
//void DigitSum(int n);
//int main()
//{
//	int n = 0;
//	scanf("��������Ҫ�ֽ����:\n");
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



/*��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� */
//#include<stdio.h>
//int n_k(int n, int k);
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("������n��k��\n");
//	scanf("%d%d", &n, &k);
//	printf("%d��%d�η�Ϊ: %d\n", n, k, n_k(n, k));
//	return 0;
//}
//int n_k(int n, int k)
//{
//	if (k > 0)
//		return n*n_k(n, k - 1);
//	else
//		return 1;
//}


/*��쳲��������ĵ�������*/
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
//	printf("쳲�������Ϊ%d\n",value);
//	return 0;
//}


/*쳲��������ĵݹ��󷨣����ڴ漫��*/
//#include<stdio.h>
//int fib(int n);
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��ĵ�n��쳲�������:\n");
//	scanf("%d", &n);
//	printf("��%d��쳲�������Ϊ%d\n",n, fib(n));
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