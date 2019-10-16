#include <stdio.h>
#include <string.h>

typedef struct{
	int account_number;
	char name[50];
	double balance;
}account;

int main(){
	
	account user[10];
	int number,i;
	double money;
	char name1[20],name2[20];
	FILE *fptr;
	fptr=fopen("account.txt","r");
	i=0;
	while(fscanf(fptr,"%d %s %s %lf",&number,
				 name1,name2,&money)!=EOF){
		user[i].account_number=number;
		sprintf(user[i].name,"%s %s",name1,name2);
		user[i].balance=money;
		i++;
	}
	fclose(fptr);
	
	fptr=fopen("transaction.txt","r");
	while(fscanf(fptr,"%d %s %s %lf",&number,
				 name1,name2,&money)!=EOF){
	
		for(i=0;i<4;i++)
			if(number==user[i].account_number){
				if(strcmp(name2,"in")==0)
					user[i].balance+=money;
				else
					user[i].balance-=money;
			}
	}
	fclose(fptr);
	
	fptr=fopen("account.txt","w");
	for(i=0;i<4;i++)
		fprintf(fptr,"%d %s %.2lf\n",
				user[i].account_number,
				user[i].name,
				user[i].balance);
	fclose(fptr);
	
	return 0;
}
