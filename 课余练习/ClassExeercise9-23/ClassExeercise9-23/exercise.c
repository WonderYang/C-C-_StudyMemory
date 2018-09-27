 #pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n = 0,x=0;
	int ret = 1;
	int i = 0;
	int j = 0;
	int sum = 0;
	scanf("%d", &x);
	for (j = 1; j <= x; j++)
	{
		ret *= j;
		sum += ret;
	}
	printf("1!+2!+....x!=%d\n", sum);
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	for (i = 0, j = 0; i < 2,j < 5; i++, j++)  //逗号表达式从左往右计算，且最终结果取决于最右边的值
//		printf("hehe\n");
//	return 0;
//}


//#include<stdio.h>
////功能：从输入中过滤数字并输出
//int main()
//{
//	int ch = 0;
//	printf("请输入一个或多个字符(ctrl+z结束):\n");
//	while ((ch = getchar()) != EOF)             //ch=getchar()必须要外加上大括号，不然会出错
//	{
//		if (ch >= '0'&&ch <= '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 1, n = 1;
//	switch (m)
//	{
//	case 0:m++;
//	case 1:m++;
//	case 2:
//		switch (n)
//		{                      //switch语句可以嵌套使用
//		case 1:m++;
//			break;
//		}           //这里加了break结果又不一样
//	case 3:m++;
//		break;
//	default:m++;
//		break;
//	}
//	printf("%d\n", m);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	switch (x)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}