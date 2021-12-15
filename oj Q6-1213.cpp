#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void output(char *str, char *c){
	if(c < str){
		return;
	}
	printf("%s\n", c);
	output(str, c - 1);
}


int main(){
	
	char *str = (char*) malloc(100 * sizeof(char));
	
	fflush(stdin);
	gets(str);
	
	int lenStr = strlen(str);
	output(str, (str + lenStr - 1));

}


