//13-4
//檢測字串是否為迴文
#include <stdio.h>
#include <string.h>

int isPalindrome(char word[1000]){
    int i, length, n;
    char arr[1000] = {0};
    length = strlen(word);
    for(i = 0; i < length; i++){
        arr[i] = word[length - 1 - i];
    }
    n = strcmp(arr, word);
    if(n == 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
