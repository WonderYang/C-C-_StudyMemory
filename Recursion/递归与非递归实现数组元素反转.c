/*�ݹ�ʵ�����鷴ת*/
#include<stdio.h>
#include<string.h>
#include<stdio.h> 
#define N 5
void arr_init(char arr[], int n);
void arr_reverse(char arr[], int sz);
void arr_print(char arr[], int n);
int main()
{
	char arr[N]={0};
	arr_init(arr, N);
	int sz = sizeof(arr)/sizeof(arr[0]);
	arr_reverse(arr, sz);
	arr_print(arr, N);
	return 0;
}
void arr_print(char arr[], int n)
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}

void arr_init(char arr[], int n)
{
	int i = 0;
	for(i = 0; i < n; i++)
	{
		scanf("%c", &arr[i]);
	}
}

void arr_reverse(char arr[], int sz)   //szǧ����ٺ��������sizeof�������ĳ��ȣ���Ϊ�������� 
{                                     //arr�Ǹ�ָ�볣����sizeof��arr��Ϊ�ģ� 
	char tmp = arr[0];
	arr[0] = arr[sz-1];
	arr[sz-1] = '\0';
	if(strlen(arr+1) > 1)
	{
		arr_reverse(arr+1, strlen(arr+1));
	}
	arr[sz-1] = tmp;
}






