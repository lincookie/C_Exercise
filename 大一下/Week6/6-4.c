#include <stdio.h>

struct customer{
    char lastname[50];
    char firstname[50];
    unsigned int customerNumber;
    struct {
        char phoneNumber[20];
        char address[200];
        char city[50];
        char state[50];
        char zipCode[6];
    } personal;
};

void getData(struct customer* c){
    scanf("%s",c->lastname);
    scanf("%s",c->firstname);
    scanf("%u",&c->customerNumber);
    scanf("%s\n",c->personal.phoneNumber);
    gets(c->personal.address);
    gets(c->personal.city);
    gets(c->personal.state);
    scanf("%s",c->personal.zipCode);
}