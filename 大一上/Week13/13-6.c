//13-6
//排序陣列中的元素(由小到大)
#include <stdio.h>

int selectionSort(int arr[100],int length){
    int maxidx, nowidx, last, tmp, i;
    for(last = length-1; last > 0; last--){
        maxidx = 0;
        for(nowidx = 0; nowidx <= last; nowidx++){
            if(arr[nowidx] > arr[maxidx]){
                maxidx = nowidx;
            }
        }
        tmp = arr[maxidx];
        arr[maxidx] = arr[last];
        arr[last] = tmp;
    }
    for(i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
