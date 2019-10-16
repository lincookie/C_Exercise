/*請宣告一個名為mystrlen的函式
傳入一個字元陣列並回傳字串內有多少字
不可呼叫strlen函式*/
#include <stdio.h>

int MyStrlen(char* arr){
    int length = 0;
    while(arr[length] != '\0'){
        length++;
    }
    return length;
}