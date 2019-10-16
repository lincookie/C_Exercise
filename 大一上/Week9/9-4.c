//9-4
//計算f(x)=6x^4+5x^3+4x^2+3x+2
#include <stdio.h>
int f(int x){
    int  a, b, c, d, ans;
    a = x * x * x * x * 6;
    b = x * x * x * 5;
    c = x * x * 4;
    d = x * 3;
    ans = a + b + c + d + 2;
    printf("%d", ans);
    return ans;
}

int main(){
    int x;
    scanf("%d", &x);
    f(x);
    return 0;
}
