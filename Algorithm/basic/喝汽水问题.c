/*2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�����Զ�����ˮ��
���ʵ�֡� */
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
