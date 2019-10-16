/*傳入兩個整數指標a、b
並將兩數交換*/
#include <stdio.h>

void swap(int *a, int *b){
    int n;
    n = *a;
    *a = *b;
    *b = n;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}