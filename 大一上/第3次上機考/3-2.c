//讀入一班學生的成績，並劃出長條圖
#include <stdio.h>

int main(){
    int A, B, C, D, F;
    int i;
    char str;
    scanf("%d%*c%d%*c%d%*c%d%*c%d%s", &A, &B, &C, &D, &F, &str);
    do{
        printf("A ");
        for(i = 0; i < A; i++){
            printf("*");
        }
        printf("\n");
        printf("B ");
        for(i = 0; i < B; i++){
            printf("*");
        }
        printf("\n");
        printf("C ");
        for(i = 0; i < C; i++){
            printf("*");
        }
        printf("\n");
        printf("D ");
        for(i = 0; i < D; i++){
            printf("*");
        }
        printf("\n");
        printf("F ");
        for(i = 0; i < F; i++){
            printf("*");
        }
        printf("\n");
    }while(str == EOF);
    return 0;
}
