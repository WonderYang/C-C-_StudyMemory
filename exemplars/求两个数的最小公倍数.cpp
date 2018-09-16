#include<stdio.h>
/*
求最大公倍数，max代表最大公倍数
求法：用最大公因数*........... 
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
