#include<stdio.h>
int aver(int x, int y);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("their average is %d\n", aver(a, b));
	return 0;
}
int aver(int x, int y)
{
	return (x&y) + ((x^y) >>1);    //>>���������ȼ�����^���������ȼ��ߣ�����һ��Ҫ��������
	                              //+�����ȼ�Ҳ��&�ߣ�������Ҳ��������� 
}
