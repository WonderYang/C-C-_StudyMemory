/*ģ��ʵ��qsort�⺯�������ַ���*/
#include<stdio.h>
#include<string.h>
#include<assert.h>
//#include<stdlib.h>    //���ÿ⺯��qsort
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

//�Ƚ�

//�Ƚ��ַ���  
int string_cmp(const void* p1, const void* p2)
{
	assert(p1&&p2);
	return strcmp(*(char**)p1, *(char**)p2);           //ǰ�ߴ��ں��ߣ��򷵻�������С���򷵻ظ���������򷵻���
}

//�Ƚ�����
int int_cmp(const void* p1, const void* p2)
{
	return (*(int *)p1 > *(int *)p2);
}

//�Ƚ�char��
int char_cmp(const void* p1, const void* p2)
{
	return (*(char*)p1 > *(char*)p2);
}

//�Ƚϸ�����
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
		for (j = 0; j < count - i - 1; j++)      //����дj = 0������һ��Ŀ�.....
		{
			int ret = cmp(((char*)base + j*sz), ((char*)base + (j + 1)*sz));
			if (ret > 0)    //�����ΪС������Ϊ����
			{
				num++;
				swap((char*)base + j*sz, (char*)base + (j + 1)*sz, sz);
			}
		}
		if (num == 0)    //���numΪ�㣬˵�������鱾���������ˣ�ֱ��ʡȥ����Ĳ���
			break;
	}
}
