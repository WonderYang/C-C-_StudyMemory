#include<stdio.h>
#include<string.h>
int main()
{
	char A[11] = "i love you";
	char B[11] = "i hate you";
	char C[11] = "0";
	printf("����ǰ��A :%s\nB:%s\n", A, B);
	//printf("��������������:\n");
	//scanf("%s", A);
	//scanf("%s", B);
	strcpy(C, A);
	strcpy(A, B);
	strcpy(B, C);
	printf("������A :%s\nB:%s\n", A, B);
	return 0;
}
