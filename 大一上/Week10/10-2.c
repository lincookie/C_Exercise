//10-2
//calc(a,b)=a if b=1
//calc(a,b)=a+calc(a,b-1)otherwise
#include <stdio.h>

int calc(int a, int b){
    if(b == 1){
        return a;
    }
    else{
        return a + calc(a,b-1);
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    calc(a, b);
    return 0;
}
