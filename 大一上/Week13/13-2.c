//13-2
//寫一個程式讀入10筆資料到陣列中，並找出最大最小值
#include <stdio.h>

int main(){
    int arr[10];
    int i, leftlen, nowidx, tmp;
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(leftlen = 9; leftlen > 0; leftlen--){
        for(nowidx = 0; nowidx < leftlen; nowidx++){
            if(arr[nowidx] > arr[nowidx + 1]){
                tmp = arr[nowidx];
                arr[nowidx] = arr[nowidx + 1];
                arr[nowidx + 1] = tmp;
            }
        }
    }
    printf("%d ", arr[9]);
    printf("%d", arr[0]);
    return 0;
}
