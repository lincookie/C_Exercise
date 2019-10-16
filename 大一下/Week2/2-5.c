/*由參數傳入字元指標，將陣列內的字進行反轉*/
#include <stdio.h>
#include <string.h>

void strReverse(char* arr){
    int length, i;
    char tmp;
    length=strlen(arr);
    for(i=0;i<length/2;i++){
        tmp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = tmp;
    }
}