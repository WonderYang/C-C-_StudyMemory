#include<stdio.h>
int sigle(int* p, int sz);
int main()
{
	int arr[] = { 1, 3, 4, 4, 3, 5, 5 ,77,77};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("该数组唯一不单的数为: %d\n", sigle(arr, sz));
	return 0;
}
int sigle(int* p, int sz)
{
	int i = 0;
	int ret = 0;
	int* str = p;
	for (; str < p + sz; str++)
	{
		ret = ret^*str;
	}
	return ret;
}
