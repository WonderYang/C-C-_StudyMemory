#include<stdio.h>
int main()
{
	float i = 0;
	float sum = 0;
	float flag = -1;
	for (i = 1; i < 100; i++)
	{
		flag = -flag;
		sum += 1/i*flag;
	}
	printf("1-1/2+1/3-1/4.....=%f", sum);         //%f½÷¼Ç£¬²»ÊÇ%d
	return 0;
}
