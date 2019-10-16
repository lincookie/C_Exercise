//13-5
//第一行讀入兩個矩陣的大小
//讀入兩個矩陣並相乘
#include <stdio.h>

int main(){
    int x, y, z, w;
    int i, j, k;
    scanf("%d %d %d %d", &y, &x, &w, &z);
    int ans[y][z], matrix1[y][x], matrix2[w][z];
    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            matrix1[i][j] = 0;
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(i = 0; i < w; i++){
        for(j = 0; j < z; j++){
            matrix2[i][j] = 0;
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i < y; i++){
        for(j = 0; j < z; j++){
            ans[i][j] = 0;
            for(k = 0;k < x; k++){
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
