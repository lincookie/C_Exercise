/*傳入一個一維陣列arr、一個整數n（陣列長度）
及一個整數指標ans，將陣列內的直加總後儲存於ans
所指向的變數中*/
#include <stdio.h>

void sumOfArray(int arr[], int n, int *ans){
    int i;
    *ans = 0;
    for(i = 0; i < n; i++){
        *ans = *ans + arr[i];
    }
}

int main(){
    int arr[5] = {10,9,8,7,6};
    int ans;
    sumOfArray(arr, 5, &ans);
    return 0;
}