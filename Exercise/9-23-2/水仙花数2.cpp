#include<stdio.h>
int main()
{
	int i = 0;
	int g, s, b = 0;
	printf("0~999的水仙花数为：\n");
	for (i = 0; i <= 999; i++)
	{
		if (i >= 100)
		{
			 g = i % 10;
			 s = i % 100 / 10;
			 b = i / 100;
			 if (g*g*g + s*s*s + b*b*b == i)
				 printf("%d\n", i);
		}
	}
	return 0;
}
