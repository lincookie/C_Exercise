//請寫一支程式讀取購買的編號及數量直到輸入0 0為止
//請使用switch語句進行選擇並計算總金額
//最後輸出購買所有的東西需要花多少錢
//請輸出一個精準到小數點下兩位的浮點數
//Number(編號)  price(售價)
//   1           $2.98
//   2           $4.50
//   3           $9.98
//   4           $4.49
//   5           $6.87
#include <stdio.h>

int main(){
    int Number;
    int Quantity;
    int flag=0;
    float Price;
    float sum=0;
    
    while(flag==0){
        scanf("%d %d", &Number, &Quantity);
        switch(Number){
            case 0 :
                if(Quantity==0){
                    flag=1;
                }
                break;
            case 1 :
                Price=Quantity*2.98;
                break;
            case 2 :
                Price=Quantity*4.5;
                break;
            case 3 :
                Price=Quantity*9.98;
                break;
            case 4 :
                Price=Quantity*4.49;
                break;
            case 5 :
                Price=Quantity*6.87;
                break;
            default:
                printf("Error");
        }
        sum=sum+Price;
    }
    printf("%.2f",sum);
    
    return 0;
}
