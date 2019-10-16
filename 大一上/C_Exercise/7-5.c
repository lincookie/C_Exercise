#include <stdio.h>

int main(){
    int a;
    int month, day;
    scanf("%d/%d",&month, &day);
    if(month>=1 && month<=12 && day>=1 && day<=31){
        switch(month){
            case 1 :
                printf("January ");
                break;
            case 2 :
                printf("February ");
                break;
            case 3 :
                printf("March ");
                break;
            case 4 :
                printf("April ");
                break;
            case 5 :
                printf("May ");
                break;
            case 6 :
                printf("June ");
                break;
            case 7 :
                printf("July ");
                break;
            case 8 :
                printf("August ");
                break;
            case 9 :
                printf("September ");
                break;
            case 10 :
                printf("Octbor ");
                break;
            case 11 :
                printf("November ");
                break;
            case 12 :
                printf("December ");
                break;
            default:
                printf("Error ");
                break;
        }
        if(day==1){
            printf("%dst",day);
        }
        if(day==2){
            printf("%dnd",day);
        }
        if(day==3){
            printf("%drd",day);
        }
        if(day!=1 && day!=2 && day!=3){
            printf("%dth",day);
        }
    }
    return 0;
}