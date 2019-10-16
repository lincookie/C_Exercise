/*第一行輸出整數a，共計15位寬，數字8位，不足捕0
第二行輸出小樹b，共計9位寬，整數4位小數4位*/
#include <stdio.h>

int main(){
    int a;
    float b;
    scanf("%d %f", &a, &b);
    printf("       %08d\n%08.4f", a, b);
    return 0;
}