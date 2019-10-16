#include <stdio.h>

int main(){
    char i='0';
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int E=0;
    while(i!='\n'){
        i=getchar();
        if(i=='a' || i=='A'){
            A++;
        }
        if(i=='e' || i=='E'){
            B++;
        }
        if(i=='i' || i=='I'){
            C++;
        }
        if(i=='o' || i=='O'){
            D++;
        }
        if(i=='u' || i=='U'){
            E++;
        }
    }
    printf("%d %d %d %d %d", A, B, C, D, E);
    return 0;
}