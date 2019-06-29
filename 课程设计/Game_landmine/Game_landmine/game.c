 #pragma warning(disable:4996)
#include"game.h"
int num = ROW*CLO - COUNT;
void menu()
{
	printf("\n\n\n\n\n");
	printf("         \t*************          ɨ��С��Ϸ         *************\n");
	printf("         \t*******************      1.play   *********************\n");
	printf("         \t*******************      0.exit   *********************\n");
	printf("         \t*******************************************************\n");

}
//��ӡɨ������
void printbroad(char arr[ROW][CLO], int row, int clo)
{
	int i = 0;
	int j = 0;
	printf("  ");
	//��ӡɨ�����̵ĺ�����
	for (i = 1; i <= row; i++)
	{
		printf(" %d", i );
	}
	printf("\n");
	printf("  ------------------\n");
	for (i = 0; i < row; i++)
	{
		//��ӡɨ�����̵�������
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
	//��������Ĺ����ǽ�������������*
	memset(&arr[0][0], '*', row*clo*sizeof(arr[0][0]));
}
void arrs_init(char arrs[ROWS][CLOS], int row, int clo)
{
	memset(&arrs[0][0], '0', row*clo*sizeof(arrs[0][0]));
}

//����������ף�1������ף�0����û�е��ף�
void arrs_randinit(char arrs[ROWS][CLOS], int row, int clo)
{
	int count = COUNT;
	int i = 0;
	int j = 0;
	do
	{
		//���������������
		i = rand() % ROW + 1;  //����1~9�ĺ�����
		j = rand() % CLO+1;  //����1~9��������
		if (arrs[i][j] != '1') //����˴��е��ף������ѭ��
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

//������ΧһȦ��8�������ж��ٸ�����
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
//����ҵ�һ�ξ͵㵽����ʱ���ðѵ�������
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

//��С���죬���������
void flag_(char arrs[ROWS][CLOS], char arr[ROW][CLO], int row, int clo)
{
	arr[row-1][clo-1] = '?';
}

void sweep(char arrs[ROWS][CLOS], char arr[ROW][CLO], int row, int clo)
{
	//�ж��Ƿ�Ϊ��һ��ɨ�׵ı�־λ
	int first = 0;
	int way;
	int x = 0;  //��ʵ������
	int y = 0;  //��ʵ������
	int flag = 1;
	int ret = 0;
	while (flag)
	{	
		start:
		printf("�����룺��1��2��\n");
		printf("1.����ɨ������    2.��С����(������ã���ʾ)   \n");
		scanf("%d", &way);
		if (way != 1 && way != 2) goto start;
		printf("����������>\n");
		scanf("%d%d", &x, &y);
		if (way == 2) {
			flag_(arrs, arr, x, y);
			printbroad(arr, ROW, CLO);
			continue;
		}
		//������ף��򷵻�0�����򷵻�1��
		ret = is_thunder(arrs, arr, x, y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			first++;
			switch (ret)
			{
			case 1:
				if (count(arrs, x, y) == 0)  //������������Χһ���׶�û�У��ð�������Χȫ��ʾ����
				{
					open(arrs, arr, x - 1, y - 1);
				}
				else {
					arr[x - 1][y - 1] = count(arrs, x, y) + '0';  //���������Χ���ף���ֻ��ʾ���Լ�����չ����Χ
					num--;
				}
				printbroad(arr, ROW, CLO);
				//printf("\n%d\n", num);
				break;
			case 0:
				//�����һ�ξ��������ף��ͽ������ߣ�������Ϸ����
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
				system("color 4e");  //��ը���󱳾���ɫ���
				printf("\n*************�㱻ը����**************\n!!!!!!!!!!    GAMEOVER   !!!!!!!!\n");
				printf("\n\n����ͼΪ��\n");
				print(arrs, ROWS, CLOS);
				flag = 0;
				break;
			}
			if (0 == num)
			{
				system("color 9e");
				printf("**************��������Ϸ���������Ӯ������*****************\n\n\n");
				break;
			}
		}
		else
		{
			printf("�����������������:\n");
		}
	}
}
//�����ж��±��Ƿ�Խ��
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

	//�����ǰλ��û�е��ף����ҵ�ǰλ����������û�б���ʾ������ʾ����ΧһȦ�׵�������
	if (arrs[i+1][j+1] == '0' && arr[i][j] == '*'&&right(i,j))
	{
		arr[i][j] = count(arrs, i+1, j+1) + '0';
		num--;
	}
	//��һλ��
	if (arrs[i + 1][j] == '0' && arr[i][j - 1] == '*'&&right(i, j-1))
	{
		arr[i][j-1] = count(arrs, i+1, j) + '0';
		num--;
		if (count(arrs, i+1, j) == 0)
		{
			open(arrs, arr, i, j-1);
		}
	}
	//��һλ��
	if (arrs[i + 1][j + 2] == '0' && arr[i][j + 1] == '*'&&right(i, j+1))
	{
		arr[i][j + 1] = count(arrs, i+1, j + 2) + '0';
		num--;
		if (count(arrs, i+1, j + 2) == 0)
		{
			open(arrs, arr, i, j + 1);
		}
	}
	//��һλ��
	if (arrs[i][j + 1] == '0' && arr[i - 1][j] == '*'&&right(i-1, j))
	{
		arr[i - 1][j] = count(arrs, i, j+1) + '0';
		num--;
		if (count(arrs, i, j+1) == 0)
		{
			open(arrs, arr, i-1, j);
		}
	}
	//����λ��
	if (arrs[i][j] == '0' && arr[i - 1][j - 1] == '*'&&right(i-1, j-1))
	{
		arr[i - 1][j - 1] = count(arrs, i, j) + '0';
		num--;
		if (count(arrs, i, j) == 0)
		{
			open(arrs, arr, i - 1, j - 1);
		}
	}
	//����
	if (arrs[i][j + 2] == '0' && arr[i - 1][j + 1] == '*'&&right(i-1, j+1))
	{
		arr[i - 1][j + 1] = count(arrs, i, j + 2) + '0';
		num--;
		if (count(arrs, i, j + 2) == 0)
		{
			open(arrs, arr, i-1, j + 1);
		}
	}
	//����
	if (arrs[i + 2][j + 2] == '0' && arr[i + 1][j + 1] == '*'&&right(i+1, j+1))
	{
		arr[i + 1][j + 1] = count(arrs, i + 2, j + 2) + '0';
		num--;
		if (count(arrs, i + 2, j + 2) == 0)
		{
			open(arrs, arr, i + 1, j + 1);
		}
	}
	//��
	if (arrs[i + 2][j + 1] == '0' && arr[i + 1][j] == '*'&&right(i+1, j))
	{
		arr[i + 1][j] = count(arrs, i + 2, j+1) + '0';
		num--;
		if (count(arrs, i + 2, j+1) == 0)
		{
			open(arrs, arr, i + 1, j);
		}
	}
	//����
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
