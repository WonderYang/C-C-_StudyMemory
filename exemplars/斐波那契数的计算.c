/*�õ�����������*/
#include<stdio.h>
int main()
{
	int x = 0;
	printf("��������Ҫ��ĵ�n��쳲�������:\n");
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
	printf("쳲�������Ϊ��%ld\n", result);
	return 0;
}


/* ����쳲��������õݹ���һ������Ĵ����˷��ڴ泬���ֲ�*/
//#include<stdio.h>
//long fibonacci(int n);
//int main()
//{
//	int x = 0;
//	printf("��������Ҫ��ĵ�n��쳲�������:\n");
//	scanf("%d",&x);
//	printf("��%d��쳲�������Ϊ��%d\n", x, fibonacci(x));
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
