#include<stdio.h>
#include<math.h>
int main()
{
	int x=0;
	int i = 0,j=0;
	int sum = 0;
	printf("please enter a figer:\n");
	scanf("%d", &x);
	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < i; j++)
			sum += x*pow(10, j);
	}
	printf("%d+%d%d+%d%d%d+%d%d%d%d+%d%d%d%d%d=%d\n", x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, sum);
	return 0;
}
