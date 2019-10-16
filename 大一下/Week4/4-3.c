/*12進制與24進制轉換*/
#include <stdio.h>

int main(){
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    if(h < 12){
        printf("hour=%02d(AM)\n",h);
    }
    else if(h == 12){
        printf("hour=%02d(PM)\n",h);
    }
    else if(h > 12){
        h = h - 12;
        printf("hour=%02d(PM)\n",h);
    }
    printf("min=%02d\n",m);
    printf("sec=%02d\n",s);
    
    return 0;
}