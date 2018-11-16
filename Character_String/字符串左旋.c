/*1.实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB */
#include<stdio.h>
#include<string.h>
void Reverse_left(char arr[], int sz, int num);
void reverse(char* start, char* end);
int main()
{
	int num = 0;
	char arr[] = "abcde";
	puts(arr);
	int sz = strlen(arr);
	printf("please enter num:\n");
	scanf("%d", &num);
	int flag = num; 
	if (num > sz / 2);      //注意，左旋数大于总个数的一半时，结果等效于总个数减去原来的左旋数的结果
	num = sz - num;
	Reverse_left(arr, sz, num);
	printf("左旋%d后结果为%s\n", flag, arr);
	return 0;
}
void Reverse_left(char arr[], int sz, int num)
{
	char* start = arr;
	char* end = arr + sz - 1;
	reverse(start, end);
	//先将整个字符串逆置 
	start = arr;
	end = arr + num - 1;
	reverse(start, end);
	//逆置前半部分 
	start = arr + num;
	end = arr + sz-1;
	reverse(start, end);
	//逆置后半部分 
}
void reverse(char* start, char* end)
{
	while (start < end)
	{
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++;
		end--;
	}
}
