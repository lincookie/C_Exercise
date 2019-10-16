/*每筆測資包含一行str
搜尋數字在str中出現的位置
輸出find數字（小數點下2位）at index str[位置]*/
#include <stdio.h>
#include <string.h>

int main(){
    char s[41];
    char *ans;
    int idx;
    float num;
    while(gets(s)){
        ans = strpbrk(s, "0123456789.");
        sscanf(ans, "%f", &num);
        idx = ans - s;
        printf("Find %.2f at index str[%d]\n", num, idx);
    }
    
    return 0;
}