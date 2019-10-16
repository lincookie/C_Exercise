/*撰寫一程式，宣告如下，int* largest(int a[], int n);
a為輸入陣列，n為陣列長度，並回傳最大整數的地址*/
#include <stdio.h>

int* largest(int a[], int n){
    int i;
    int *ptr = &a[0];
    for(i = 0; i < n; i++){
        if(a[i] > *ptr){
            ptr = &a[i];
        }
    }
    return ptr;
}

int main(){
    int a[5] = {9,13,1,10,7};
    largest(a,5);
    
    return 0;
}