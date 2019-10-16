#include <stdio.h>
#include <string.h>

int main(){
	int i,totalAccout,accountNumber,offset;
	int account[1000];
	FILE*fin,*transction;
	char action[4];
	double money,balance;
	char N[50],N2[50];
	
	fin = fopen("account.bin","rb+");
	rewind (fin);
	fread(&totalAccout,sizeof(int),1,fin);
	fread(account,sizeof(int),totalAccout,fin);
	
	transction = fopen("transaction.txt","r");
	while (fscanf(transction,"%d %*s %s %lf",&accountNumber,action,&money)!=EOF){
		for (i=0;i<totalAccout;i++){
			if (account[i] == accountNumber){
				offset = sizeof(int) + sizeof(int) *totalAccout;
				offset += 108*i+100;
				fseek (fin,offset,SEEK_SET);
				fread (&balance,sizeof(double),1,fin);
				if (strcmp("in",action)==0){
					balance += money;
				}
				else {
					balance-=money;
				}
				fseek (fin,-sizeof(double),SEEK_CUR);
				fwrite (&balance,sizeof(double),1,fin);
			}
		}
	}
	fclose (transction);
	fclose (fin);
	return 0;
} 
