#include <stdio.h>

void InsertionSort(int *arr, int n){
    int k, preIndex, tmp=0, now, i;
    for(k = 0; k < n; k++){
        preIndex = k -1;
        now = arr[k];
        while(preIndex >= 0 && arr[preIndex] > now){
            arr[preIndex + 1] = arr[preIndex];
            preIndex --;
        }
        arr[preIndex +1] = now;
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    InsertionSort(&arr,10);
    return 0;
}