//11-4
//寫一隻程式使陣列中的數全部加6
#include <stdio.h>

int main(){
    int i;
    int arr[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++){
        arr[i] = arr[i]+6;
    }
    return 0;
}
