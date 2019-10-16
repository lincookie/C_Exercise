//11-5
//a[1]=a[0]+a[1]+a[2]
//a[2]=a[1]+a[2]+a[3]依此類推
#include <stdio.h>

int main(){
    int i;
    int arr[10];
    for(i = 0; i <= 9; i++){
        scanf("%d", &arr[i]);
    }
    int variable = arr[0];
    for(i = 0; i <= 7; i++){
        arr[i] = arr[i] + arr[i + 1] + arr[i + 2];
    }
    for(i = 8; i >= 1; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = variable;
    return 0;
}
