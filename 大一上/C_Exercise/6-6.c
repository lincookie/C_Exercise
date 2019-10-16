//寫一隻程式讀取一個整數N及一個文字M,並且依照M的值(ABCD)印出N層的三角形
// A:   B:   C:   D:
// *    ***  ***    *
// **   **    **   **
// ***  *      *  ***
#include <stdio.h>

int main (){
    int num;
    int i, j, k;
    char request;
        scanf("%d %c", &num, &request);
        switch(request){
            case'A':
                for(i=0;i<num;i++){
                    for(j=0;j<=i;j++){
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            case'B':
                for(i=0;i<=num;i++){		
                    for(j=i;j<num;j++){
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            case'C':
                for(i=0;i<num;i++){
                    for(k=0;k<i;k++){
                        printf(" ");	
                    }	
                    for(j=i;j<num;j++){
                        printf("*");		
                    }
                    printf("\n");
                }
                break;
            
            case'D':
                for(i=0;i<num;i++){
                    for(k=i;k<num-1;k++){
                        printf(" ");
                    }
                    for(j=0;j<=i;j++){
                        printf("*");
                    }
                    printf("\n");
                }
                break;
            
            default:
                printf("\nPlz input the correct options\n");
                break;

        }

    return 0;
}
