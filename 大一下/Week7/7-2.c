#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *fptr;
	char tmp[1000];
	fptr=fopen("account.txt","r");
	while(fgets(tmp,1000,fptr)){
		printf("%s",tmp);
	}
	fclose(fptr);
	
	return 0;
}