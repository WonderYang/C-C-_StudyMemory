#include<stdio.h>
#include<math.h>
int main()
{
	int i =0,count=0;
	for (i = 101; i <= 200; i+=2)
	{
		int j=0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >sqrt(i))
		{
			count++;
			printf("%dÊÇËØÊı\n", i);
		}	
	}
	printf("%d",count);
	return 0;
}
