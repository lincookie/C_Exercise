//10-5
//gcd(x,y)=x if y=0
//gcd(y,x % y)= otherwise
#include <stdio.h>

int gcd(int x, int y){
    if(y == 0){
        return x;
    }
    else{
        return gcd(y,x % y);
    }
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    gcd(x, y);
    return 0;
}
