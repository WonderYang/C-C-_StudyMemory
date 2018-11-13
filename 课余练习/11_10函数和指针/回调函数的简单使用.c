#include<stdio.h>
int int_cmp(const void* p1, const void* p2); 
int main()
{
	int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 55};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(int), int_cmp);     //int_cmp即为回调函数 
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}
int int_cmp(const void* p1, const void* p2)
{
	int* str1 = (int*)p1;
	int* str2 = (int*)p2;
	if (*str1 > *str2)
	return -1;
	else
	return 1;
	//return (*str1 > *str2);   //这是升序排列 
}
