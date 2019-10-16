/*每筆測資兩行，第一行為s1，第二行為s2
輸出使用s2對s1分割的結果
並且輸出find s2出現次數 “s2字串” in “s1字串”*/
#include <stdio.h>
#include <string.h>

int main(){
    char s1[21], s2[21], s3[21];
    char* str;
    int num;
    while(gets(s1) && gets(s2)){
        num = 0;
        strcpy(s3, s1);
        str = strtok(s1, s2);
        while(str != NULL){
            printf("%s\n", str);
            str = strtok(NULL, s2);
            num++;
        }
        if(num != 0){
            num--;
        }
        printf("Find %d \"%s\" in \"%s\"\n", num, s2, s3);
    }
    return 0;
}