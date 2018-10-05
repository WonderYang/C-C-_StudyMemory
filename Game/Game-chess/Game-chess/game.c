 #pragma warning(disable:4996)
#include<stdio.h>
#include<Windows.h>
#define ROW 3
#define CLO 3
void print(char arr[ROW][CLO], int row, int clo);       //打印棋盘
void menu();                                            //打印菜单
void play_man(char arr[ROW][CLO]);                      //人类下棋
int judge(char arr[ROW][CLO]);                          //判断输赢
void play_computer(char arr[ROW][CLO]);                 //电脑下棋           都可以写成char arr[][3],但不能写成char arr[][];
int judge_full(char arr[ROW][CLO], int row, int clo);   //判断棋盘是否已满

int main()
{
	srand((unsigned int)time(NULL)); //产生随机数种子
	int key = 0;
	int flag = 0;
	do
	{
		char arr[ROW][CLO] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };  //坑1，初始化一定注意
		menu();
		scanf("%d", &key);
		if (key)
		{
			print(arr, 3, 3);
			while (1)
			{
				if (judge_full(arr, 3, 3))
				{
					printf("平局\n");
						break;
				}

				play_man(arr);
				print(arr, 3, 3);
				flag = judge(arr);
				if (flag)
				{
					printf("玩家赢\n");
					break;
				}

				if (judge_full(arr, 3, 3))
				{
					printf("平局\n");
					break;
				}

				play_computer(arr);
				Sleep(2000);
				print(arr, 3, 3);
				flag = judge(arr);
				if (flag)
				{
					printf("电脑赢\n");
					break;
				}
			}
		}
		else
		{
			printf("游戏结束\n");
			break;
		}
	} while (key);
	return 0;
}
void menu()
{
	printf("**************   欢迎光临  ******************\n");
	printf("**************** 请选择 *********************\n");
	printf("*****************1.开始游戏  ****************\n");
	printf("*****************0.结束游戏  ****************\n");
}

void print(char arr[ROW][CLO], int row, int clo)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < clo; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j <(clo - 1))
			{
				printf("|");
			}
		}

		printf("\n");

		for (j = 0; j < clo; j++)
		{
			printf("---");
			if (j <(clo - 1))
			{
				printf("|");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void play_man(char arr[ROW][CLO])
{
	int row = 0;
	int clo = 0;
	do
	{
		printf("请输入你要下的行和列：\n");
		scanf("%d%d", &row, &clo);
		if (row > 3 || clo > 3 || row < 0 || clo < 0)
		{
			printf("输入有误，请重新输入\n");
			continue;
		}
		else if (arr[row-1][clo-1] != ' ')    //坑二，不要写成arr[row][clo];
		{
			printf("这里有棋了，请重新输入\n");
			continue;
		}
		else
		{
			arr[row - 1][clo - 1] = '0';
			break;
		}

	} while (1);
	
}

int judge(char arr[ROW][CLO])
{
	int i = 0;
	for (i = 0; i < 3; i++)   //检测行
	{
		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][2] != ' '))
		{
			return 1;
		}
	}

	for (i = 0; i < 3; i++)   //检测列
	{
		if ((arr[0][i] == arr[1][i]) && (arr[1][i] == arr[2][i]) && (arr[2][i] != ' '))
		{
			return 1;
		}
	}

	if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[0][0] != ' '))
	{
		return 1;
	}
	if ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && ((arr[0][2] != ' ')))
	{
		return 1;
	}
	return 0;
}

void play_computer(char arr[ROW][CLO])
{
	while (1)
	{
		int row = rand() % 3;
		int clo = rand() % 3;
		if (arr[row][clo] == ' ')
		{
			arr[row][clo] = '1';
			break;
		}
	}
}

int judge_full(char arr[ROW][CLO],int row, int clo)
{
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < clo; j++)
		{
			if (arr[row][clo] == ' ')
			{
				num++;
				break;
			}
		}
	}
	if (num > 0)
		return 1;
	else
		return 0;
}