#include<stdio.h>  
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[1001];
	int b,c,n;
	while(gets(input)!=0)
	{ 
		int a[257]={0};
		n=strlen(input);
		for(b=0;b<n;b++)                    
		{
			a[input[b]]=a[input[b]]+1;         
		}                                 
		for(b=1;b<n;b++)                    
		{
			for(c=256;c>=0;c--)               
			{
				if(a[c]==b)
				printf("%d %d\n",c,b);
			} 
		}
		printf("\n");
	}
	return 0;    
}
