#include<stdio.h>
#include<string.h>
int main()
{
	char A[11] = "i love you";
	char B[11] = "i hate you";
	char C[11] = "0";
	printf("交换前：A :%s\nB:%s\n", A, B);
	//printf("请输入两个数组:\n");
	//scanf("%s", A);
	//scanf("%s", B);
	strcpy(C, A);
	strcpy(A, B);
	strcpy(B, C);
	printf("交换后：A :%s\nB:%s\n", A, B);
	return 0;
}
