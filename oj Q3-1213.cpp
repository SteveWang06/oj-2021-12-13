#include <stdio.h>

int max(int d[],int n){
	
	int i,max,index=0;
	
	for(i=0;i<n;i++){
        if(d[index]<d[i])
			index=i;
	}

	max=d[index];

	return max;
}

int repeat(int b[],int d[],int max,int n){
	
	int i,index=0,r=0;
	
	for(i=0;i<n;i++){
		if(max==d[i]){
            r++;
			b[index]=i;
			index++;
		}
	}
     
    return r;
}


int main()
{
    int a[6][6],b[36]={0},d[6]={0};
    int n,i,j,l=0,c=0,flag=0;
    int k,r;

	scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

for(k=0;k<n;k++){

	for(i=0;i<n;i++){
		d[i]=a[k][i];
	}  
	                      

	r=repeat(b,d,max(d,n),n);


    for(i=0;i<r;i++){
		l=b[i],c=0;            

		for(j=0;j<n;j++){
                                    
			if(a[k][l]>a[j][l])    
				break;
			else if(a[k][l]<=a[j][l])
				c++;
		}                           

	   if(c==n){
		   printf("(%d,%d) = %d\n",k,l,a[k][l]);
	       flag++;
	   }	
	}
}
		if(!flag)
			printf("NONE\n");

    
    return 0;
}




