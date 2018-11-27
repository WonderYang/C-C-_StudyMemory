/*模拟实现qsort库函数排序字符串*/
#include<stdio.h>
#include<string.h>
#include<assert.h>
//#include<stdlib.h>    //调用库函数qsort
int string_cmp(const void* p1, const void* p2);
int char_cmp(const void* p1, const void* p2);
int int_cmp(const void* p1, const void* p2);
int double_cmp(const void* p1, const void* p2);
void swap(const void* p1, const void* p2, int sz);
void my_qsort(void* base, int count, int sz, int(*cmp)(const void* p1, const void* p2));
int main()
{
	int i = 0;
	//char* arr[] = { "aaa", "abbb", "fcc", "dddd" };
	//int arr[] = { 7, 9, 5, 6, 8, 3, 28 };
	char arr[] = { 'a', 'c', 'b', 'q', 'a', 'd' };
	int count = sizeof(arr) / sizeof(arr[0]);
	//my_qsort(arr, sz, sizeof(char*), string_cmp);
	my_qsort(arr, count, sizeof(char), char_cmp);
	for (i = 0; i < count; i++)
	{
		printf("%c\n", arr[i]);
	}
	return 0;
}

//比较

//比较字符串  
int string_cmp(const void* p1, const void* p2)
{
	assert(p1&&p2);
	return strcmp(*(char**)p1, *(char**)p2);           //前者大于后者，则返回正数，小于则返回负数，相等则返回零
}

//比较整形
int int_cmp(const void* p1, const void* p2)
{
	return (*(int *)p1 > *(int *)p2);
}

//比较char型
int char_cmp(const void* p1, const void* p2)
{
	return (*(char*)p1 > *(char*)p2);
}

//比较浮点型
int double_cmp(const void* p1, const void* p2)
{
	return (*(double*)p1 > *(double*)p2);
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
void my_qsort(void* base, int count, int sz, int(*cmp)(const void* p1, const void* p2))
{
	assert(base);
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)      //忘了写j = 0，找了一天的坑.....
		{
			int ret = cmp(((char*)base + j*sz), ((char*)base + (j + 1)*sz));
			if (ret > 0)    //这里改为小于零则为降序
			{
				num++;
				swap((char*)base + j*sz, (char*)base + (j + 1)*sz, sz);
			}
		}
		if (num == 0)    //如果num为零，说明该数组本来就有序了，直接省去后面的步骤
			break;
	}
}
