#include <stdio.h>

struct customer      //客戶資料
    {
    int  customerNumber; //客戶編號
    char lastName[15];   //名字
    char firstName[15];  //姓氏
    char phoneNumber[15];//電話號碼
    int  VIPLevel;       //VIP等級
    };

int main(){
    struct customer data[5];
    int i;
    for(i = 0; i < 5; i++){
        scanf("%d", &data[i].customerNumber);
        scanf("%s", data[i].lastName);
        scanf("%s", data[i].firstName);
        scanf("%s", data[i].phoneNumber);
        scanf("%d", &data[i].VIPLevel);
    }
    for(i = 4; i >= 0; i--){
        printf("%d ", data[i].customerNumber);
        printf("%s ", data[i].lastName);
        printf("%s ", data[i].firstName);
        printf("%s ", data[i].phoneNumber);
        printf("%d\n", data[i].VIPLevel);
    }
    return 0;
}