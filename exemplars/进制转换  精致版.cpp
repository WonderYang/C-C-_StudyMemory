#include<stdio.h>
void ex(int x);
int main()
{
	void ex(int x);	
	int x;
	printf("������һ��ʮ������:\n");
	top:
	scanf("%d",&x);
	if(x<0)
	{
		printf("����������������һ��\n");
		goto top; 
	}
	ex(x);
	
} 
void ex(int x)
{
	int yu;
	yu=x%2;
	if(x>=2)
	ex(x/2);
	printf("%d",yu);
}
