#include<stdio.h>
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int k=n-1; k>=1; k--){
        for(int m=1; m<=n; m++){
            if(m<=k){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        for(int m=n; m>=1; m--){
            if(m<=k){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*

*             * 
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/