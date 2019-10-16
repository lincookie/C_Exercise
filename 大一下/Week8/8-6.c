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
	int i,n;
	
	account user[1000],tmp;

	fptr = fopen("account.bin","rb");
	fread (&n,4,1,fptr);
	for (i=0;i<n;i++){
		fread (&user[i].account_number,sizeof(int),1,fptr);
	}
	for (i=0;i<n;i++){
		fread (user[i].firstname,sizeof(char),sizeof(user[i].firstname),fptr);
		fread (user[i].lastname,sizeof(char),sizeof(user[i].lastname),fptr);
		fread (&user[i].balance,sizeof(double),1,fptr);
	}
	fclose(fptr);
	for (i=0;i<n;i++){
		printf ("%d %s %s %.2lf\n",user[i].account_number,user[i].firstname,
				user[i].lastname,user[i].balance);
	}
	return 0;
}
