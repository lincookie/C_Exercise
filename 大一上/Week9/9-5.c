//9-5
//第一個參數代表要印出幾行，第二個參數代表要用甚麼字元組成
#include <stdio.h>

int printTree(int level, char des){
    int i, j, k;
    level = (level*2)-1;
    for(i = 1;i <= level;i+=2){
        for(k = i;k <= level-1;k+=2){
            printf(" ");
        }
        for(j = 1;j <= i;j++){
            printf("%c",des);
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int level;
    char des;
    scanf("%d %c",&level, &des);
    printTree(level, des);
    return 0;
}
