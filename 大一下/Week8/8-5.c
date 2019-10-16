#include <stdlib.h>
#include <stdio.h>
 
 typedef struct{
    int account_number;  // �b��s��
    char firstname[50];  // �m
    char lastname[50];   // �W
    double balance;      // �b��l�B
}account;

int main(){
	FILE* fptr;
	int i,n=5;
	
	account user[5];
	for (i=0;i<=4;i++){
		scanf ("%d",&user[i].account_number);
		scanf ("%s",user[i].firstname);
		scanf ("%s",user[i].lastname);
		scanf ("%lf",&user[i].balance);
	}
	
	fptr = fopen("account.bin","wb");
	fwrite (&n,4,1,fptr);
	for (i=0;i<5;i++){
		fwrite (&user[i].account_number,4,1,fptr);
	}
	for (i=0;i<5;i++){
		fwrite (user[i].firstname,sizeof(char),sizeof(user[i].firstname),fptr);
		fwrite (user[i].lastname,sizeof(char),sizeof(user[i].lastname),fptr);
		fwrite (&user[i].balance,sizeof(double),1,fptr);
	}
	fclose(fptr);
	return 0;
}
