#include <stdio.h>

void BubbleSort(int *arr,int n){
    int k, now, tmp = 0, i;
    for (k=n-1;k>=0;k--){
		for (now=0;now<k;now++){
			if (arr[now]>arr[now+1]){
				tmp = arr[now];
				arr[now] = arr[now+1];
				arr[now+1] = tmp;
			}
		}
	}
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    BubbleSort(&arr,10);
    return 0;
}