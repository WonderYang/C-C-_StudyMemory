#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value); 
int main()
{
	int x = 0;
	printf("please enter a figer:\n");
	scanf("%d", &x);
	printf("%u\n", reverse_bit(x));
	return 0;
}
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned ret = 0;
	for (i = 0; i <= 31; i++)
	{
		ret += ((value>>i)&1) * pow(2, 31-i);     //坑，这里一定要加括号，*的优先级高于按位与（&） 
//		if ((value>>i)&1 == 1)
//		{
//			ret = ret + pow(2, 31-i);
//		}

	}
	return ret;
}
