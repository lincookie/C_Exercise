#include <stdlib.h>
#include <stdio.h>
 
 typedef struct{
    int account_number;  
    char firstname[50];  
    char lastname[50];   
    double balance;      
}account;
 
int main(){
	FILE* fptr;
	int i,k,now,ch;

	account user[5],tmp;
	for (i=0;i<=4;i++){
		scanf ("%d",&user[i].account_number);
		scanf ("%s",user[i].firstname);
		scanf ("%s",user[i].lastname);
		scanf ("%lf",&user[i].balance);
	}
	
	for (k=4;k>=0;k--){
		for (now=0;now<k;now++){
			if (user[now].account_number>user[now+1].account_number){
				tmp = user[now];
				user[now] = user[now+1];
				user[now+1] = tmp;
			}
		}
	}
	
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
