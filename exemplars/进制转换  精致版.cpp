#include<stdio.h>
void ex(int x);
int main()
{
	void ex(int x);	
	int x;
	printf("请输入一个十进制数:\n");
	top:
	scanf("%d",&x);
	if(x<0)
	{
		printf("输入有误，再来输入一遍\n");
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
