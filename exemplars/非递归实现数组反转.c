/*实现数组元素的反转(非递归)*/
#include<stdio.h>
void arr_reverse(char arr[], int sz);
int main()
{
	char arr[6] = { '\0', 'b', 'c', 'd', 'e', 't' };
	int sz = sizeof(arr) / sizeof(arr[0]);
	arr_reverse(arr, sz);
	printf("%s", arr);        //必须有‘\0’才会接受哟，这应该一个for循环来打印元素（但本数组我故意加了‘\0’,图方便）
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
