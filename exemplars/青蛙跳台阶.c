#include<stdio.h>
/*
������̨����ʵ����쳲��������С�
������һ��̨�ף�����һ�ַ�����
����������̨�ף����ж��ַ�����
����������̨�ף���һ����һ��ʱ������f(n-1)�ַ�������һ��������̨��ʱ������f(n-2)�ַ���
�������ƣ���n��̨��ʱ��f(n-1)+f(n-1)�ַ����������� 
*/
int fibonacci(int n);
int main()
{
	int n = 0;
	printf("please enter a figer>\n");
	scanf("%d", &n);
	printf("%d",fibonacci(n));
	return 0;
}
int fibonacci(int n)
{
	if (n <= 2)
	return 1;
	else
	return fibonacci(n-1) + fibonacci(n-2);
}
