//13-3
//第一行讀入矩陣大小y*x(1~10)
//接下來讀入兩個y*x的整數陣列
#include <stdio.h>

int main(){
    int i, j, x, y;
    scanf("%d %d", &y, &x);
    int arr1[y][x], arr2[y][x], ans[y][x];
    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            ans[i][j] = arr1[i][j] + arr2[i][j];
            if(j == x-1){
                printf("%d", ans[i][j]);
            }
            else{
                printf("%d ", ans[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
