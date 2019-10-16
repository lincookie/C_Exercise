/*輸入兩個字串s1、s2
將s1的前6個字複製到名為s3的空字串
將s2的全部附加到s3後面*/
#include <stdio.h>
#include <string.h>

int main(){
    char s1[21], s2[21], s3[21];
    gets(s1);
    gets(s2);
    printf("s1 = %s\ns2 = %s\n", s1, s2);
    strncpy(s3, s1, 6);
    printf("s3 = %s\n", s3);
    strcat(s3, s2);
    printf("s3 = %s\n", s3);
    return 0;
}