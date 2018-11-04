#include<stdio.h>
int aver(int x, int y);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("their average is %d\n", aver(a, b));
	return 0;
}
int aver(int x, int y)
{
	return (x&y) + ((x^y) >>1);    //>>操作符优先级级比^操作符优先级高，所以一定要加上括号
	                              //+的优先级也比&高，所以那也必须加括号 
}
