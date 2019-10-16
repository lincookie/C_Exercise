/*每筆測資兩行，第一行為s1，第二行為s2
搜尋s2是否在s1中出現，若有則輸出該字串
沒有則輸出no*/
#include <stdio.h>
#include <string.h>

int main(){
    char s1[21], s2[21];
    char* str;
    while(gets(s1) && gets(s2)){
        str = strstr(s1, s2);
        if(str == NULL){
            printf("No\n");
        }
        else{
            printf("%s\n", str);
        }
    }
    return 0;
}