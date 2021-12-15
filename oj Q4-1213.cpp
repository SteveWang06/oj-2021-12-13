#include<stdio.h>

int main(){
	int row, column, k, count = 0, arr[100];
	scanf("%d%d%d", &row, &column, &k);
	for(int i = 0; i < row*column; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < row*column; i++){
		if(arr[i] == k){
			count++;
		}
	}
	
	if(count > 0){
		printf("%d\n", count);
	}
	else{
		puts("0");
	}
}
