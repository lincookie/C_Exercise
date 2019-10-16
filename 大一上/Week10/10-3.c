//10-3
//0 if n=0
//fib(n) if n=1
//fib(n-1)+fib(n-2) if n>1 
#include <stdio.h>

int Fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else if(n > 1){
        return Fib(n - 1)+Fib(n - 2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    Fib(n);
    return 0;
}
