//9-3
//改寫成只有一個return的程式
#include <stdio.h>

double median (double x, double y, double z){
    double tmp;
    if (x <= y){
        if (y <= z) tmp = y;
        else if (x <= z) tmp = z;
        else  tmp = x;
    }
    else{
        if (z <= y) tmp = y;
        else{
            if (x <= z) tmp = x;
            else tmp = z;
        }
    }
}

int main(){
    double median();
}
