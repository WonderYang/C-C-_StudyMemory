#include<stdio.h>
void hanoi(int n,char A,char B,char C)
{ 
	if(n==1){ printf("Movesheet%dfrom%cto%c\n",n,A,C); }
	else{ hanoi(n-1,A,C,B); 
	printf("Movesheet%dfrom%cto%c\n",n,A,C); 
	hanoi(n-1,B,A,C); }
} 
int main() 
{ 
	int n;
 	printf("«Î ‰»Î≈Ã ˝£∫"); 
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
	 }
