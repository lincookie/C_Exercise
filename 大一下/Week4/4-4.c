/*不停讀取字串並存到陣列s中，直到出現字元\終止
接著清除字串中所有的"及‘後輸出*/
#include <stdio.h>

int main(){
    char s;
    while(1){
        scanf("%c", &s);
        if(s == '\\'){
            break;
        }
        else if(s == '\''|| s =='\"');
        else printf("%c", s);
    }
    return 0;
}