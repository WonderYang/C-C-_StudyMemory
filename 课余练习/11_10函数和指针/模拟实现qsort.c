/*模拟实现qsort库函数排序字符串*/
#include<stdio.h>
#include<string.h>
#include<assert.h>
//#include<stdlib.h>    //调用库函数qsort
int char_cmp(const void* p1, const void* p2);
void my_qsort(void* base, int count, int sz, int(*char_cmp)(const void* p1, const void* p2));
int main()
{
	int i = 0;
	char* arr[] = { "aaa", "abbb", "fcc", "dddd" };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(char*), char_cmp);
	my_qsort(arr, sz, sizeof(char*), char_cmp);
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}
int char_cmp(const void* p1, const void* p2)
{
	assert(p1);
	assert(p2);
	return strcmp(*(char**)p1, *(char**)p2);           //前者大于后者，则返回正数，小于则返回负数，相等则返回零
}
void swap(const void* p1, const void* p2, int sz)
{
	assert(p1);
	assert(p2);
	int i = 0;
	for (; i < sz; i++)
	{
		*((char*)p1 + i) ^= *((char*)p2 + i);
		*((char*)p2 + i) ^= *((char*)p1 + i);
		*((char*)p1 + i) ^= *((char*)p2 + i);
	}
}
void my_qsort(void* base, int count, int sz, int(*char_cmp)(const void* p1, const void* p2))
{
	assert(base);
	int i = 0;
	int j = 0;
	int num = 0;
	for (; i < count - 1; i++)
	{
		for (; j < count - i - 1; j++)
		{
			if (char_cmp((char*)base + j*sz, (char*)base + (j + 1)*sz) > 0)    //这里改为小于零则为降序
			{
				num++;
				swap((char*)base + j*sz, (char*)base + (j + 1)*sz, sz);
			}
		}
		if (num == 0)    //如果num为零，说明该数组本来就有序了，直接省去后面的步骤
			break;
	}
}

