 #pragma warning(disable:4996)
#include"game.h"
void playgame()
{
	char arr[ROW][CLO] = { 0 };    //��ʾ����
	char arrs[ROWS][CLOS] = { 0 };   //��������������
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
		printf("�����룺 ");
		scanf("%d", &key);
		if (key == 1)
		{
			//��ʼ��Ϸ����Ϊ����ɫ
			system("color 2e");
			playgame();
		}
		else if (key == 0)
			printf("�˳���Ϸ\n");
		else
			printf("������������������:\n");
	} while (key);
	return 0;
}