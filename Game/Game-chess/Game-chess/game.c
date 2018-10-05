 #pragma warning(disable:4996)
#include<stdio.h>
#include<Windows.h>
#define ROW 3
#define CLO 3
void print(char arr[ROW][CLO], int row, int clo);       //��ӡ����
void menu();                                            //��ӡ�˵�
void play_man(char arr[ROW][CLO]);                      //��������
int judge(char arr[ROW][CLO]);                          //�ж���Ӯ
void play_computer(char arr[ROW][CLO]);                 //��������           ������д��char arr[][3],������д��char arr[][];
int judge_full(char arr[ROW][CLO], int row, int clo);   //�ж������Ƿ�����

int main()
{
	srand((unsigned int)time(NULL)); //�������������
	int key = 0;
	int flag = 0;
	do
	{
		char arr[ROW][CLO] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };  //��1����ʼ��һ��ע��
		menu();
		scanf("%d", &key);
		if (key)
		{
			print(arr, 3, 3);
			while (1)
			{
				if (judge_full(arr, 3, 3))
				{
					printf("ƽ��\n");
						break;
				}

				play_man(arr);
				print(arr, 3, 3);
				flag = judge(arr);
				if (flag)
				{
					printf("���Ӯ\n");
					break;
				}

				if (judge_full(arr, 3, 3))
				{
					printf("ƽ��\n");
					break;
				}

				play_computer(arr);
				Sleep(2000);
				print(arr, 3, 3);
				flag = judge(arr);
				if (flag)
				{
					printf("����Ӯ\n");
					break;
				}
			}
		}
		else
		{
			printf("��Ϸ����\n");
			break;
		}
	} while (key);
	return 0;
}
void menu()
{
	printf("**************   ��ӭ����  ******************\n");
	printf("**************** ��ѡ�� *********************\n");
	printf("*****************1.��ʼ��Ϸ  ****************\n");
	printf("*****************0.������Ϸ  ****************\n");
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
		printf("��������Ҫ�µ��к��У�\n");
		scanf("%d%d", &row, &clo);
		if (row > 3 || clo > 3 || row < 0 || clo < 0)
		{
			printf("������������������\n");
			continue;
		}
		else if (arr[row-1][clo-1] != ' ')    //�Ӷ�����Ҫд��arr[row][clo];
		{
			printf("���������ˣ�����������\n");
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
	for (i = 0; i < 3; i++)   //�����
	{
		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][2] != ' '))
		{
			return 1;
		}
	}

	for (i = 0; i < 3; i++)   //�����
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