#include<stdio.h>
/*
����󹫱�����max������󹫱���
�󷨣����������*........... 
*/
int ad(int x,int y);
int main()
{
	int a,b,q,w,max;
	printf("pleas scanf two figer:\n");
	scanf("%d%d",&a,&b);
	q=a/ad(a,b);
	w=b/ad(a,b);
	printf("the number you want is %d",q*w*ad(a,b));
	
	
} 
int ad(int x,int y)
{
	int t=x;
	do{
		x=y;
		y=t;
		t=x%y;
	}while(t);
	return y;
}
