#include<stdio.h>
int DigitSum(int x);
int main()
{
	int x = 0;
	scanf("%d",&x);
	printf("�����ֽ����ӵĺ�Ϊ��%d",DigitSum(x));
	return 0;
}
int DigitSum(int x)
{
	if(x>9)
	return x%10+DigitSum(x/10);
	else
	return x;
}
