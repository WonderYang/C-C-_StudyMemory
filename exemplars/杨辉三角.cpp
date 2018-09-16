#include<stdio.h>
int main()
{
	int i,j;
	int shuzu[10][10]={0};
	for(i=0;i<10;i++)
		for(j=0;j<=i;j++)
		{
			if(i==0)
			shuzu[i][j]=1;
			else if(j<1)
			shuzu[i][j]=1;
			else if(i==j)
			shuzu[i][j]=1;
			else
			shuzu[i][j]=shuzu[i-1][j-1]+shuzu[i-1][j];
			
		}
		for(i=0;i<10;i++)
		{
			for(j=0;j<=i;j++)
			printf("%d\t",shuzu[i][j]);
			printf("\n");
			printf("\n"); 
		}	
	
} 
