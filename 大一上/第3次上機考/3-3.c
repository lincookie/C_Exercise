//檢測N是否為質數
#include <stdio.h>

int prime_number(int num){
    int i, n=0;
    num = num / 2;
    for(i = 2; i < num; i++){
        if(num % i == 0){
            n++;
        }
    }
    if(n == 0){
        printf("是質數\n");
    }
    else{
        printf("不是質數\n");
    }
    return 0;
}

int main(){
    int num;
    scanf("%d", &num);
    prime_number(num);
    return 0;
}
