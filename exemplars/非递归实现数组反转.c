/*ʵ������Ԫ�صķ�ת(�ǵݹ�)*/
#include<stdio.h>
void arr_reverse(char arr[], int sz);
int main()
{
	char arr[6] = { '\0', 'b', 'c', 'd', 'e', 't' };
	int sz = sizeof(arr) / sizeof(arr[0]);
	arr_reverse(arr, sz);
	printf("%s", arr);        //�����С�\0���Ż����Ӵ����Ӧ��һ��forѭ������ӡԪ�أ����������ҹ�����ˡ�\0��,ͼ���㣩
	return 0;
}
void arr_reverse(char arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		char tmp;
		tmp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = tmp;
		left++;
		right--;
	}
}
