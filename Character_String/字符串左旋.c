/*1.ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB */
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
	if (num > sz / 2);      //ע�⣬�����������ܸ�����һ��ʱ�������Ч���ܸ�����ȥԭ�����������Ľ��
	num = sz - num;
	Reverse_left(arr, sz, num);
	printf("����%d����Ϊ%s\n", flag, arr);
	return 0;
}
void Reverse_left(char arr[], int sz, int num)
{
	char* start = arr;
	char* end = arr + sz - 1;
	reverse(start, end);
	//�Ƚ������ַ������� 
	start = arr;
	end = arr + num - 1;
	reverse(start, end);
	//����ǰ�벿�� 
	start = arr + num;
	end = arr + sz-1;
	reverse(start, end);
	//���ú�벿�� 
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
