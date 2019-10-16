#include <stdio.h>

int main(){
        int y, z;
        int i=0;
        int num;
        scanf("%d %d %d", &num, &y, &z);
        if(num==z){
            i++;
        }
        while(i!=y){
            num++;
            if(num%z==0){//尋找z的倍數
                i++;
            }
        }
        printf("%d", num);
        
    return 0;

}