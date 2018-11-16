/*2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以多少汽水。
编程实现。 */
#include<stdio.h>
int main()
{
	int money = 0;
	int count = 0;
	int i = 0;
	while (money < 20)
	{
		i++;
		count++;
		if (i == 2)
		{
			i--;
			count++;
		}
		money++;
	}
	printf("%d", count);
	return 0;
}
