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
    int i, j = 0, max;
    for(i = 0; i < 5; i++){
        scanf("%d", &data[i].customerNumber);
        scanf("%s", data[i].lastName);
        scanf("%s", data[i].firstName);
        scanf("%s", data[i].phoneNumber);
        scanf("%d", &data[i].VIPLevel);
    }
    j = data[0].VIPLevel;
    for(i = 1; i < 5; i++){
        if(j < data[i].VIPLevel){
            j = data[i].VIPLevel;
            max = i;
        }
    }
    printf("%d ", data[max].customerNumber);
    printf("%s ", data[max].lastName);
    printf("%s ", data[max].firstName);
    printf("%s ", data[max].phoneNumber);
    printf("%d\n", data[max].VIPLevel);
    return 0;
}