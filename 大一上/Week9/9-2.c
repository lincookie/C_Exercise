//9-2
//寫一隻名為max的副程式，由參數接收4個數，並回傳其最大值
#include <stdio.h>
#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) )

int max(int a, int b, int c, int d){
    int e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b){
        SWAP(a,b,e);
    }
    if(a>c){
        SWAP(a,c,e);
    }
    if(a>d){
        SWAP(a,d,e);
    }
    if(b>c){
        SWAP(b,c,e);
    }
    if(b>d){
        SWAP(b,d,e);
    }
    if(c>d){
        SWAP(c,d,e);
    }
    return d;
}

int main(){
    int a, b, c, d;
    max(a, b, c, d);
    return 0;
}
