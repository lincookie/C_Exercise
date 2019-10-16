//讀進一個二位數，並將其對應的中文寫法印出來
#include <stdio.h>

int main(){
    int  num1, num2;
    char num[9][4] = {"一","二","三","四","五","六","七","八","九"};
    scanf("%d%*c%d", &num1, &num2);
    if(num2 == 0){
        printf("%s十", num[num1 - 1]);
    }
    else{
        printf("%s十%s", num[num1 - 1], num[num2 - 1]);
    }
    return 0;
}
