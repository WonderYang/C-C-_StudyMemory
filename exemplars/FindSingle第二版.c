#pragma warning(disable:4996)
/*1.һ��������ֻ�����������ǳ���һ�Σ�
�����������ֶ����������Ρ�
�ҳ����������֣����ʵ�֡�
*/
#include<stdio.h>
void FindSingle(int arr[], int sz);
int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 5, 5, 18, 6, 6 };    
	int sz = sizeof(arr) / sizeof(arr[0]);
	FindSingle(arr, sz);
	return 0;
}
void FindSingle(int arr[], int sz)
{
	int ret = arr[0];   //��������ֵ���Ľ��,����ǧ��ע�⣬ret��ʼֵ��Ҫ����Ϊ0�������������0�Ļ�����Խ������
	int i = 0;
	int flag = 1;   //����Ѱ��ret�Ķ�����λ�е�һ��1��
	int count = 0;
	int a = 0;
	int b = 0;
	for (i = 1; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//����������ֵ
	for (i = 0; i < 32; i++)
	{
		if (ret&(flag))
		{
			break;
		}
		else
		{
			flag <<= 1;
			count++;
		}
	}
	//�ҳ������ֵ��bitλΪ1�ĵ�һ��λ��
	flag = 1;                    //���������Ҫ��flag��ʼ��Ϊһ��
	for (i = 0; i < sz; i++)
	{
		if (arr[i] & (flag << count))
		{
			a ^= arr[i];
		}
		else
		{
			b ^= arr[i];
		}
	}
	//�������
	printf("ֻ����һ�ε���Ϊ��%d   %d\n", a, b);
}
