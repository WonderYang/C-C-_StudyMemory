#include<stdio.h>
# define m 5
# define n 7
int main()
{
	int a[m]={2,5,7,13,15};
	int b[n]={3,4,9,10,56,98,100};
	int c[m+n];                
	int i,j,k;
	printf("a[m]:");
	for(i=0;i<m;i++)printf("%4d",a[i]);
	printf("\nb[n]:");
	for(i=0;i<n;i++)printf("%4d",b[i]);
	i=j=k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i],i++;
		}
		else
		{
			c[k]=b[j],j++;	
		}
		k++;			
	}
	while(i==m&&k<m+n)  c[k++]=b[j++];
	while(j==n&&k<m+n)  c[k++]=a[i++];
	printf("\n合并后由小到大的顺序为:\n");
	for(i=0;i<m+n;i++)
	printf("%4d",c[i]);
		
}
  
