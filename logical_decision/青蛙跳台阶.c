#include<stdio.h>
/*
青蛙跳台阶其实类似于斐波那契数列。
假如跳一个台阶，则有一种方法；
假如跳两个台阶，则有二种方法；
假如跳三个台阶，第一步跳一步时，则有f(n-1)种方法，第一步跳两个台阶时，则有f(n-2)种方法
依次类推，跳n个台阶时有f(n-1)+f(n-2)种方法！！！！ 
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
	if (n < 2)       //千万注意这里是n < 2, 而斐波那契数是 n <= 2; 因为由题知f(2)=2而不是一； 
	return 1;
	else
	return fibonacci(n-1) + fibonacci(n-2);
}
