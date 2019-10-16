/*宣告一個可以儲存五個整數的一維陣列a，接著由鍵盤讀入五個整數並依序存入a中
再使用回圈依序輸出，a[i]的位址，a[i]的值，a+i的值，a+i指向位置的值*/
#include <stdio.h>

int main(){
    int a[5];
    int i;
    for(i = 0; i <= 4; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i <= 4; i++){
        printf("%p %d %p %d\n", &a[i], a[i], a+i, *(a+i));
    }
    return 0;
}