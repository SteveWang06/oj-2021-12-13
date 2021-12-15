#include<stdio.h>

void input(int *arr, int *a, int row, int column){
	
    for (int i = 0; i < row; i++){
        for (int j=0;j<column;j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void output(int *arr, int row, int column){
	int n = 0;
	for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if (a[i][j] == num){
                n = (&a[i][j]) - arr;
                
                printf("%d %d\n", n/20, n%column);
                y=1;
            }
        }
    }
    if (y==0)
    puts("-1 -1");
}

int main(void){
	int row, column;
    scanf("%d%d%d",&row, &column, &num);
    int a[100][100];
    int arr = &a[0][0];
    input(arr, a, row, column);
    output(arr, a, row, column);
    
}
