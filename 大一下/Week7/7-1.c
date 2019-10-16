#include <stdio.h>
#include <stdlib.h> 

typedef struct{
	int account_number;
	char name[50];
	double balance;
}account;

int main(){
	
	int i;
	FILE *fptr;
	account user[10]={
		{100,"Alan Jones",348.17},
		{300,"Mary Smith",27.19},
		{500,"Sam Sharp",0.00},
		{700,"Suzy Green",-14.22}
	};
	fptr=fopen("account.txt","w");
	for(i=0;i<4;i++){
		fprintf(fptr,"%d %s %.2lf\n",
                user[i].account_number,
                user[i].name,
                user[i].balance);
	}
	fclose(fptr);
	
	return 0;
}