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
	int i,k,now,number;
	double bal;
	char str1[9],str2[4];
	account user[5],tmp;
	
	fptr = fopen("account.txt","r");
	for (i=0;i<5;i++){
		fscanf (fptr,"%d",&user[i].account_number);
		fscanf (fptr,"%s",user[i].firstname);
		fscanf (fptr,"%s",user[i].lastname);
		fscanf (fptr,"%lf",&user[i].balance);
	}
	fclose (fptr);
	
	for (k=4;k>=0;k--){
		for (now=0;now<k;now++){
			if (user[now].account_number>user[now+1].account_number){
				tmp = user[now];
				user[now] = user[now+1];
				user[now+1] = tmp;
			}
		}
	}
	
	fptr = fopen("transaction.txt","r");
	while (fscanf (fptr,"%d %s %s %lf",&number,str1,str2,&bal)!=EOF){
		for (i=0;i<=4;i++){
			if (number==user[i].account_number){
				if (strcmp(str2,"in")==0){
					user[i].balance+=bal;
				}
				else {
					user[i].balance-=bal;
				}
			}
		}
	}
	fclose(fptr);
	
	fptr = fopen("account.txt","w");
	for (i=0;i<5;i++){
		fprintf (fptr,"%d ",user[i].account_number);
		fprintf (fptr,"%s ",user[i].firstname);
		fprintf (fptr,"%s ",user[i].lastname);
		fprintf (fptr,"%.2lf\n",user[i].balance);
	}
	fclose (fptr);
	
	return 0;
}
