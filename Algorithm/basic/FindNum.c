/*//���Ͼ���
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
*/
#include<stdio.h>
#define ROW 3
#define COL 3
int FindNum(int(*p)[3], int row, int col, int num);
int main()
{
	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	printf("please enter->\n");
	int num = 0;
	scanf("%d", &num);
	int ret = FindNum(arr, ROW, COL, num);
	if (ret)
		printf("�ҵ���\n");
	else
		printf("û���ҵ�\n");
	return 0;
}
int FindNum(int(*p)[3], int row, int col, int num)
{
	int x = 0;
	int y = col - 1;
	while (x < row && y >= 0)
	{
		if (num < p[x][y])
			y--;
		else if (num > p[x][y])
			x++;
		else
			return 1;
	}
	return 0;
}

