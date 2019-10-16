//11-2
//寫一隻程式隨機生成N個0.0~1.0間的數字
#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;
    int i, frequency;
    scanf("%d", &frequency);
    for(i = 1; i <= frequency; i++){
        num = (rand()%10)/10.0;
        printf("%.1f ",num);
    }
    return 0;
}
