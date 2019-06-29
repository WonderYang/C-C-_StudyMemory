 #pragma warning(disable:4996)
#include"game.h"
int num = ROW*CLO - COUNT;
void menu()
{
	printf("\n\n\n\n\n");
	printf("         \t*************          扫雷小游戏         *************\n");
	printf("         \t*******************      1.play   *********************\n");
	printf("         \t*******************      0.exit   *********************\n");
	printf("         \t*******************************************************\n");

}
//打印扫雷棋盘
void printbroad(char arr[ROW][CLO], int row, int clo)
{
	int i = 0;
	int j = 0;
	printf("  ");
	//打印扫雷棋盘的横坐标
	for (i = 1; i <= row; i++)
	{
		printf(" %d", i );
	}
	printf("\n");
	printf("  ------------------\n");
	for (i = 0; i < row; i++)
	{
		//打印扫雷棋盘的纵坐标
		printf("%d| ", i+1);
		for (j = 0; j < clo; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void arr_init(char arr[ROW][CLO], int row, int clo)
{
	//这个函数的功能是将该数组所有置*
	memset(&arr[0][0], '*', row*clo*sizeof(arr[0][0]));
}
void arrs_init(char arrs[ROWS][CLOS], int row, int clo)
{
	memset(&arrs[0][0], '0', row*clo*sizeof(arrs[0][0]));
}

//生成随机地雷，1代表地雷，0代表没有地雷；
void arrs_randinit(char arrs[ROWS][CLOS], int row, int clo)
{
	int count = COUNT;
	int i = 0;
	int j = 0;
	do
	{
		//生成随机横纵坐标
		i = rand() % ROW + 1;  //生成1~9的横坐标
		j = rand() % CLO+1;  //生成1~9的纵坐标
		if (arrs[i][j] != '1') //如果此处有地雷，则继续循环
		{
			arrs[i][j] = '1';
			count--;
		}
	} while (count);

		

}
void print(char arrs[ROWS][CLOS], int row, int clo)
{
	int i = 0;
	int j = 0;
	printf("==============================================================\n\n");
	for (i = 1; i < row-1; i++)
	{
		printf(" ");
		for (j = 1; j < clo-1; j++)
		{
			printf("%c ", arrs[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("==============================================================\n\n");
}


int is_thunder(char arrs[ROWS][CLOS],char arr[ROW][CLO], int row, int clo)
{
	if (arrs[row][clo] == '1')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//计算周围一圈（8个数）有多少个地雷
int count(char arrs[ROWS][CLOS], int row, int clo)
{
	int count = 0;
	return ((arrs[row - 1][clo - 1] +
		arrs[row - 1][clo] +
		arrs[row - 1][clo + 1] +
		arrs[row][clo - 1] +
		arrs[row][clo + 1] +
		arrs[row + 1][clo - 1] +
		arrs[row + 1][clo] +
		arrs[row + 1][clo + 1])-'0'*8);

}
//当玩家第一次就点到地雷时，得把地雷移走
void movefirst(char arrs[ROWS][CLOS], int row, int clo)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (arrs[x][y] != '1')
		{
			arrs[x][y] = '1';
			break;
		}
	}
	arrs[row][clo] = '0';
}

//插小红旗，即标记有雷
void flag_(char arrs[ROWS][CLOS], char arr[ROW][CLO], int row, int clo)
{
	arr[row-1][clo-1] = '?';
}

void sweep(char arrs[ROWS][CLOS], char arr[ROW][CLO], int row, int clo)
{
	//判断是否为第一次扫雷的标志位
	int first = 0;
	int way;
	int x = 0;  //真实横坐标
	int y = 0;  //真实纵坐标
	int flag = 1;
	int ret = 0;
	while (flag)
	{	
		start:
		printf("请输入：（1或2）\n");
		printf("1.输入扫雷坐标    2.插小红旗(标记雷用？表示)   \n");
		scanf("%d", &way);
		if (way != 1 && way != 2) goto start;
		printf("请输入坐标>\n");
		scanf("%d%d", &x, &y);
		if (way == 2) {
			flag_(arrs, arr, x, y);
			printbroad(arr, ROW, CLO);
			continue;
		}
		//如果是雷，则返回0，否则返回1；
		ret = is_thunder(arrs, arr, x, y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			first++;
			switch (ret)
			{
			case 1:
				if (count(arrs, x, y) == 0)  //如果这个格子周围一个雷都没有，得把它的周围全显示出来
				{
					open(arrs, arr, x - 1, y - 1);
				}
				else {
					arr[x - 1][y - 1] = count(arrs, x, y) + '0';  //这个格子周围有雷，则只显示他自己，不展开周围
					num--;
				}
				printbroad(arr, ROW, CLO);
				//printf("\n%d\n", num);
				break;
			case 0:
				//如果第一次就碰到了雷，就将雷移走，提升游戏体验
				if (first == 1)
				{
					movefirst(arrs, x, y);
					if (count(arrs, x, y) == 0)
					{
						open(arrs, arr, x - 1, y - 1);
					}
					else {
						arr[x-1][y-1] = count(arrs, x, y) + '0';
						num--;
					}
					printbroad(arr, ROW, CLO);
					break;
				}
				system("color 4e");  //被炸掉后背景颜色变红
				printf("\n*************你被炸掉了**************\n!!!!!!!!!!    GAMEOVER   !!!!!!!!\n");
				printf("\n\n地雷图为：\n");
				print(arrs, ROWS, CLOS);
				flag = 0;
				break;
			}
			if (0 == num)
			{
				system("color 9e");
				printf("**************！！！游戏结束，玩家赢！！！*****************\n\n\n");
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入:\n");
		}
	}
}
//用来判断下标是否越界
int right(int i, int j)
{
	if (  (i + 1)>=1 && (i + 1)<=9 && (j + 1)>=1 &&(j + 1)<= 9  )
	{
		return 1;
	}
	return 0;
}

void open(char arrs[ROWS][CLOS], char arr[ROW][CLO], int i, int j)
{

	//如果当前位置没有地雷，而且当前位置在棋盘上没有被显示，则显示出周围一圈雷的数量；
	if (arrs[i+1][j+1] == '0' && arr[i][j] == '*'&&right(i,j))
	{
		arr[i][j] = count(arrs, i+1, j+1) + '0';
		num--;
	}
	//左一位置
	if (arrs[i + 1][j] == '0' && arr[i][j - 1] == '*'&&right(i, j-1))
	{
		arr[i][j-1] = count(arrs, i+1, j) + '0';
		num--;
		if (count(arrs, i+1, j) == 0)
		{
			open(arrs, arr, i, j-1);
		}
	}
	//右一位置
	if (arrs[i + 1][j + 2] == '0' && arr[i][j + 1] == '*'&&right(i, j+1))
	{
		arr[i][j + 1] = count(arrs, i+1, j + 2) + '0';
		num--;
		if (count(arrs, i+1, j + 2) == 0)
		{
			open(arrs, arr, i, j + 1);
		}
	}
	//上一位置
	if (arrs[i][j + 1] == '0' && arr[i - 1][j] == '*'&&right(i-1, j))
	{
		arr[i - 1][j] = count(arrs, i, j+1) + '0';
		num--;
		if (count(arrs, i, j+1) == 0)
		{
			open(arrs, arr, i-1, j);
		}
	}
	//左上位置
	if (arrs[i][j] == '0' && arr[i - 1][j - 1] == '*'&&right(i-1, j-1))
	{
		arr[i - 1][j - 1] = count(arrs, i, j) + '0';
		num--;
		if (count(arrs, i, j) == 0)
		{
			open(arrs, arr, i - 1, j - 1);
		}
	}
	//右上
	if (arrs[i][j + 2] == '0' && arr[i - 1][j + 1] == '*'&&right(i-1, j+1))
	{
		arr[i - 1][j + 1] = count(arrs, i, j + 2) + '0';
		num--;
		if (count(arrs, i, j + 2) == 0)
		{
			open(arrs, arr, i-1, j + 1);
		}
	}
	//右下
	if (arrs[i + 2][j + 2] == '0' && arr[i + 1][j + 1] == '*'&&right(i+1, j+1))
	{
		arr[i + 1][j + 1] = count(arrs, i + 2, j + 2) + '0';
		num--;
		if (count(arrs, i + 2, j + 2) == 0)
		{
			open(arrs, arr, i + 1, j + 1);
		}
	}
	//下
	if (arrs[i + 2][j + 1] == '0' && arr[i + 1][j] == '*'&&right(i+1, j))
	{
		arr[i + 1][j] = count(arrs, i + 2, j+1) + '0';
		num--;
		if (count(arrs, i + 2, j+1) == 0)
		{
			open(arrs, arr, i + 1, j);
		}
	}
	//左下
	if (arrs[i + 2][j] == '0' && arr[i + 1][j - 1] == '*'&&right(i+1, j-1))
	{
		arr[i + 1][j - 1] = count(arrs, i + 2, j) + '0';
		num--;
		if (count(arrs, i + 2, j) == 0)
		{
			open(arrs, arr, i + 1, j - 1);
		}
	}
}
