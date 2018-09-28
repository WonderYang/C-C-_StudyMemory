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
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (s);

	return 0;
}
void menu()
{
	printf("***************************************************************************************\n");
	printf("**************************              请选择         ********************************\n");
	printf("******************************     1.开始游戏>>>1   ***********************************\n");
	printf("******************************     2.结束游戏>>>0   ***********************************\n");
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
		printf("请输入你猜的数字:\n");
		scanf("%d", &figer);
		if (figer > ret)
		{
			num++;
			printf("你猜的数字大了   你已经猜了%d次\n", num);
		}
		else if (figer < ret)
		{
			num++;
			printf("你猜的数字小了   你已经猜了%d次\n", num);
		}
		else
		{
			num++;
			printf("恭喜你！！！！！猜对了\n你总共猜了%d次\n", num);
			if (num <= 5)
				printf("你真牛逼！！\n");
			else if (num <= 20)
				printf("你还行！！\n");
			else
				printf("辣鸡！！！\n");
			flag = 0;
		}
	} while (flag);

}
