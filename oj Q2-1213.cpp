#include<stdio.h>
#include<math.h>

int a[100][100], i, j, c = 1, count = 1;
void Fun(int n, int N, int b)
{
	if(c <= c+n-1 && c <= N)
	{ 
		   for(j = count; j <= n; j++)
		   {
			   a[count][j] = c;
			   c++;
		   }	
    }
	if(c <= c+n-2 && c <= N)
	{
		for(i = count+1; i <= n-1; i++)
		{
			a[i][n] = c;
			c++;
		}
	}
	if(c <= c+n-2 && c <= N)
	{
		for(j = n; j >= count; j--)
		{
			a[n][j] = c;
			c++;
		}
	}
	if(c <= c+n-3 && c <= N)
	{
		for(i = n-1; i >= count + 1; i--)
		{
			a[i][count] = c;
			c++;
		}
	}
	count++;
	if(c <= N) Fun(n-1,N,b);
    
	else
	{
		for(i = 1; i <= sqrt(N); i++)
		{
		    for(j = 1; j <= sqrt(N); j++){
			
				if(b > 0)
	    			printf("%3d\t", a[i][j]);
				else 
					printf("%3d\t", a[j][i]);		    
			}
			printf("\n");
		}
	}
}

int main()
{
	int n, N, b;
	scanf("%d", &n);
	c = 1;
	count = 1;
	N = n*n;
	b = n;
	Fun(n, N, b);
		
	return 0;
}
