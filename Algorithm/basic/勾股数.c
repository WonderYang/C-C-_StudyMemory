//��������
//������������һ��������Ȼ����a < b < c������������Ϊ�����ε��������ܹ��γ�һ��ֱ��������
//�����������a + b + c <= 1000�Ĺ�����
//����aС���������a��ͬ�ģ�bС���������


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


//���ŷ��� 
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
