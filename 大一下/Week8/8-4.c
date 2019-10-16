#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char bisness[5];
	char name[20];
	int amount;
	float price;
}note;

int main(){
	int i=0;
	float val=0;
	note data[20];
	FILE* fptr;
	
	fptr = fopen("note.txt","r");
	while (fscanf (fptr,"%s %s %d %f",
					data[i].bisness,
					data[i].name,
					&data[i].amount,
					&data[i].price)!=EOF){
		if (strcmp(data[i].bisness,"Sell")==0){
			val+=data[i].amount*data[i].price;
		}
		else {
			val-=data[i].amount*data[i].price;
		}
		i++;
	}
	fclose(fptr);

	printf ("%.2f",val);
	return 0;
}
