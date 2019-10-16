/*輸入兩個字串s1、s2及兩個整數m、n
比較s1、s2是否相等，相等輸出yes，不相等輸出no
比較s1、s2從頭算起長度n個字元是否相等 
比較s1、s2從第m個字算起長度n個字元是否相等*/
#include <stdio.h>
#include <string.h>

int main(){
    char s1[21], s2[21];
    int m, n, i;
    gets(s1);
    gets(s2);
    scanf("%d %d", &m, &n);
    printf("s1 = %s\ns2 = %s\n", s1, s2);
    if(strcmp(s1, s2) == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    if(strncmp(s1, s2, n) == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    for(i = 0; i < m; i++){
        s1[i] = s2[i] = '0';
    }
    if(strncmp(s1, s2, m+n) == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}