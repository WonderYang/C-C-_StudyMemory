 #pragma warning(disable:4996)
#include"game.h"
void playgame()
{
	char arr[ROW][CLO] = { 0 };    //显示棋盘
	char arrs[ROWS][CLOS] = { 0 };   //真正操作的棋盘
	arr_init(arr, ROW, CLO);
	arrs_init(arrs, ROWS, CLOS);
	arrs_randinit(arrs, ROWS, CLOS);
	printbroad(arr, ROW, CLO);
	//print(arrs, ROWS, CLOS);
	sweep(arrs, arr, ROW, CLO);
	
}
int main()
{
	srand((unsigned int)time(NULL));
	int key = 0;
	do
	{
		menu();
		printf("请输入： ");
		scanf("%d", &key);
		if (key == 1)
		{
			//开始游戏背景为淡蓝色
			system("color 2e");
			playgame();
		}
		else if (key == 0)
			printf("退出游戏\n");
		else
			printf("输入有误，请重新输入:\n");
	} while (key);
	return 0;
}