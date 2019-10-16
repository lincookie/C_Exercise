//13-1
//寫一個程式計算兩個一維陣列的內積
#include <stdio.h>

int main(){
    int A[10], B[10];
    int i, j, ans = 0;
    for(i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }
    for(i = 0; i < 10; i++){
        for(j = i; j <= i; j++){
            ans += A[i] * B[j];
        }
    }
    printf("%d", ans);
    return 0;
}
