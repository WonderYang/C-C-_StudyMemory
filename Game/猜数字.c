#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	void menu();
	void play();
	int ret = 0;
	int s = 0;
	do
	{
		menu();
		scanf("%d", &s);
		switch (s)
		{
		case 1:
			play();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (s);

	return 0;
}
void menu()
{
	printf("***************************************************************************************\n");
	printf("**************************              ��ѡ��         ********************************\n");
	printf("******************************     1.��ʼ��Ϸ>>>1   ***********************************\n");
	printf("******************************     2.������Ϸ>>>0   ***********************************\n");
	printf("***************************************************************************************\n");
}
void play()
{
	int flag = 1;
	int figer=0;
	int num = 0;
	int ret = 0;
	ret = rand() % 10 + 1;
	do{
		printf("��������µ�����:\n");
		scanf("%d", &figer);
		if (figer > ret)
		{
			num++;
			printf("��µ����ִ���   ���Ѿ�����%d��\n", num);
		}
		else if (figer < ret)
		{
			num++;
			printf("��µ�����С��   ���Ѿ�����%d��\n", num);
		}
		else
		{
			num++;
			printf("��ϲ�㣡���������¶���\n���ܹ�����%d��\n", num);
			if (num <= 5)
				printf("����ţ�ƣ���\n");
			else if (num <= 20)
				printf("�㻹�У���\n");
			else
				printf("����������\n");
			flag = 0;
		}
	} while (flag);

}
