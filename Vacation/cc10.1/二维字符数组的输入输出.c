#include<stdio.h>
int main()
{
	int i=0;
	char arr[10][10];
	for(i=0;i<10;i++)
	{
		gets(&arr[i][0]);
		if(arr[i][0]=='\0')
		break;
	}
	for(i=0;i<10;i++)
	{
		if(arr[i][0]=='\0')
			break;
		puts(arr[i]);
	}
	return 0;
} 
