/*找出最大與最小的整數
存入min與max所指向的空間*/
#include <stdio.h>

void findMaxMin(int *arr, int n, int *max, int *min){
    int i;
    *max = *min = *arr;
    for(i = 1; i < n; i++){
    	if(*(arr+i) > *max){
        	*max = *(arr+i);
    	}
        if(*(arr+i) < *min){
        	*min = *(arr+i);
    	}
    }
}

int main(){
    int arr[5] = {56,4,94,8,7};
    int min, max;
    findMaxMin(arr, 5, &max, &min);
    return 0;
}
