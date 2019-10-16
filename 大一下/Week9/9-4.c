#include <stdio.h>
//未完成
void SelectionSort(int *arr, int n){
    int k, now, tmp , min, i;
    for(k = 0; k < n-1; k++){
        min = i;
        for(now = k+1; now < n; now++){
            if(arr[now] < arr[min]){
                min = now;
            }
        }
        tmp = arr[min];
        arr[min] = arr[k];
        arr[k] = tmp;
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    SelectionSort(&arr,10);
    return 0;
}