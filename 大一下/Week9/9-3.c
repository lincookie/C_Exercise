#include <stdio.h>

int BinarySearch(int *arr, int len, int num){
    int lowIndex = 0;
    int highIndex = len - 1;
    int midIndex;
    while (lowIndex <= highIndex){
        midIndex = (lowIndex + highIndex)/2;
        printf("lowIndex=%d midIndex=%d highIndex=%d mid_num=%d\n",lowIndex,midIndex,highIndex,arr[midIndex]);
        if(arr[midIndex] == num){
            return midIndex;
        }
        else if(arr[midIndex]>num){
            highIndex = midIndex - 1;
        }
        else{
            lowIndex = midIndex + 1;
        }
    }
    return -1;
}

int main(){
    int arr[7]={1,4,9,12,15,20,34};
    BinarySearch(arr,7,4);
    return 0;
}