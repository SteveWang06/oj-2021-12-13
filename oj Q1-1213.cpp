#include<stdio.h>
int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	int array[M][N];
	int i,j,n;
	for(i=0;i<M;i++)				
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&n);
			array[i][j] = n;	
		}
	}
	int flag=0;						
	for(i=1;i<M-1;i++) 
	{
		for(j=1;j<N-1;j++)
		{
			if(array[i][j]>array[i-1][j] && array[i][j]>array[i + 1][j] && array[i][j]>array[i][j + 1] && array[i][j]>array[i][j-1])
			{
				printf("%d %d %d\n",array[i][j],i + 1,j + 1);
				flag=1;
			}
		}
	}
	if(flag == 0)
	{
		printf("None %d %d",M,N);
	}
	return 0;
}
