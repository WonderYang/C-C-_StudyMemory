#include<stdio.h>
/*���ֲ����㷨*/
int main()
{
	int result = 0;
	int arr[] = { 1, 3, 4, 5, 9, 15,17 };
	int Lenth = sizeof(arr) / sizeof(arr[0]);
	int binary_search(int arr[], int x, int left, int right);
	int x = 0;
	scanf("%d", &x);
	int left = 0;
	int right = Lenth-1;
	result = binary_search(arr, x, left, right);
	if (result>=0)
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", result);
	}
	else
		printf("û�и�Ԫ��\n");
	return 0;
}
int binary_search(int arr[], int x, int left, int right)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x <arr[mid])
		{
			right = mid - 1;
		}
		else if (x>arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

