#include<stdio.h>

int main()
{
    unsigned int n;
    int i,a,b,c;
    scanf("%u %d",&n,&i);
    a=(n>>(i+1))&1;
    b=(n>>(i+3))&1;
    c=(n>>(i+5))&1;
    printf("%d %d %d %u",a,b,c,n);
}