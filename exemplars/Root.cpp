#include<stdio.h>
int main()
{
	float Old,New,n;
	New=1;
	printf("������һ����:\n");
	scanf("%f",&n);
	do
	{
		Old=New;
		New=(Old+n/Old)/2;
	}
	while(Old!=New);
	printf("���ķ���Ϊ:%f\n",Old);   //���������ݵ������Ī��%d������ֱ�ӻ�� 
	
	
	
}
