#include <stdio.h>

typedef union{
    char txt[2];
    short ans; 
}data;

short packCharacters(char a, char b){
    data c;
    c.txt[0] = b;
    c.txt[1] = a;
    return c.ans;
}