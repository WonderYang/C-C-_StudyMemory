#include<stdio.h>
int main()
{
	float Old,New,n;
	New=1;
	printf("请输入一个数:\n");
	scanf("%f",&n);
	do
	{
		Old=New;
		New=(Old+n/Old)/2;
	}
	while(Old!=New);
	printf("它的方根为:%f\n",Old);   //浮点型数据的输出切莫用%d，否则直接会错 
	
	
	
}
