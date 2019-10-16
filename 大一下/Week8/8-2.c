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
	int i,k,now;

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

	for (i=0;i<5;i++){
		printf ("%d ",user[i].account_number);
		printf ("%s ",user[i].firstname);
		printf ("%s ",user[i].lastname);
		printf ("%.2lf\n",user[i].balance);
	}
	return 0;
}
