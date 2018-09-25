#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	printf("0~999之间的水仙花数为：\n");
	for (i = 1; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
			{
				if (i*i*i + j*j*j + k*k*k == i * 100 + j * 10 + k)
					printf("%d\n", i * 100 + j * 10 + k);
			}

	return 0;
}
