#include <stdio.h>

int main (void)
{
	while (1)
	{	
		int N;
		printf ("请输入方阵的行列数：\n");
		scanf ("%d",&N);
		int a[N][N];
		int i,j,k,cut=0;
		for (k=0;k<N/2;k++)
		{
			i=j=k;
			for (;j<N-k-1;j++)
				a[i][j]=++cut;
			for (;i<N-k-1;i++)
				a[i][j]=++cut;
			for (;j>k;j--)
				a[i][j]=++cut;
			for (;i>k;i--)
				a[i][j]=++cut;
		}
		if (N%2)
			a[N/2][N/2]=++cut;
		for (i=0;i<N;i++)
		{
			for (j=0;j<N;j++)
				printf ("%4d",a[i][j]);
				printf ("\n");
		}
		printf ("\n\n");
	}
	return 0;
}
