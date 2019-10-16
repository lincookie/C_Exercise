/*1.轉換成8禁制進行輸出
2.輸出累積到目前為止，8進制共輸出了幾位數*/
#include <stdio.h>

int main(){
    int num;
    int count = 0;
    char s[100];
    while(scanf("%d", &num) != EOF){
        printf("%o ",num);
        sprintf(s,"%o",num);
        count += strlen(s);
        printf("%d\n",count);
    }
    return 0;
}