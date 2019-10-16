/*第一行有號10進位
第二行無號10進位
第三行帶有0x標記，印出n的16進制
第四行8進制輸出n*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%+d\n",n);
    printf("%d\n",n);
    printf("0x%X\n",n);
    printf("0x%x\n",n);
    printf("%o\n",n);
    return 0;
}