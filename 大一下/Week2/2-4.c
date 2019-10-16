/*計算兩個一維陣列的面積，由副程式傳入三個參數
分別是整數指標a、b及一個整數n（陣列長度）
最後回傳內積的值*/
#include <stdio.h>

int inner_product(int A[], int B[], int n){
    int i, ans;
    for(i = 0; i < n; i++){
        ans = ans + (A[i] * B[i]);
    }
    return ans;
}

int main(){
    int A[] = {1,2,3};
    int B[] = {4,5,6};
    inner_product(A, B, 3);
    return 0;
}