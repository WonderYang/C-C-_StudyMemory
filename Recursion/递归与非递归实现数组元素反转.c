/*递归实现数组反转*/
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

void arr_reverse(char arr[], int sz)   //sz千万别再函数里调用sizeof来测它的长度，因为传进来的 
{                                     //arr是个指针常量，sizeof（arr）为四； 
	char tmp = arr[0];
	arr[0] = arr[sz-1];
	arr[sz-1] = '\0';
	if(strlen(arr+1) > 1)
	{
		arr_reverse(arr+1, strlen(arr+1));
	}
	arr[sz-1] = tmp;
}






