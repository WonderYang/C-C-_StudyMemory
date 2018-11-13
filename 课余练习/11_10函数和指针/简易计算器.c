#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("**************  1.¼Ó   ******************\n");
	printf("**************  2.¼õ   ******************\n");
	printf("**************  3.³Ë   ******************\n");
	printf("**************  4.³ı   ******************\n");
	printf("**************  0.EXIT   ******************\n");
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 1;
	char* s = " +-*/";
	int (*p[5])(int x, int y) ={NULL, add, sub, mul, div};
	while(input)
	{
		menu();
		printf("ÇëÑ¡Ôñ:\n");
		scanf("%d", &input);
		if (input>=1 && input<=4)
		{
			printf("ÇëÊäÈëÊı×Ö£º\n");
			scanf("%d%d", &x, &y);
			printf("%d%c%d = %d\n", x, s[input], y, (*p[input])(x, y));
		}
		else if(input == 0)
		{
			printf("ÍË³ö£¡£¡£¡£¡\n");
		}
		else
		{
			printf("ÊäÈë´íÎó,ÇëÖØĞÂÊäÈë\n");
		}
	}
	
	return 0;
} 
