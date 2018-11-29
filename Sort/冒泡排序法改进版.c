#include<stdio.h>
#define SIZE 7
void bub(int* p, int sz);
int main()
{
	int arr[SIZE] = {1, 18, 5, 7, 3, 2, 0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bub(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
	return 0;
} 
void bub(int* p, int sz)
{
	int i = 0;
	int j = 0;
	int flag = 0;     //用来标记是否有序 
	for (i = 0; i < sz - 1; i++)
	{
		flag = 0;    //每一大伦都需要把flag重新置零 
		for (j = 0; j < sz - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				flag = 1;
				
				p[j] ^= p[j+1];
				p[j+1] ^= p[j];
				p[j] ^= p[j+1];
			}
		}
		if (0 == flag)
		{
			break;
		}
		
	}
}
