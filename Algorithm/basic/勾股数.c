//问题描述
//　　勾股数是一组三个自然数，a < b < c，以这三个数为三角形的三条边能够形成一个直角三角形
//　　输出所有a + b + c <= 1000的勾股数
//　　a小的先输出；a相同的，b小的先输出。


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i <= 1000; i++)
//	{
//		for (j = i+1; j<= 1000; j++)
//		{
//			for (k = j+1; k <=1000; k++)
//			{
//				if (i*i + j*j == k*k && i<j && j<k)
//				{
//					printf("%d %d %d\n", i, j, k);
//				}
//			}
//		}
//	}
//	return 0;
//} 


//更优方法 
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 3;
	int j = 4;
	for (i = 3; i<500; i++)
	{
		for (j = 4; j<500; j++)
		{
			int k = i*i + j*j;
			double a = sqrt(k);
			int m = a;
			//double b = double(m);
			if (a == m)
			{
				printf("%d %d %d\n", i, j, m);
			}
			 
		}
	}
}
