#include<stdio.h>
int main(){
    int n = 4;
    for(int i = n; i >= 1; i--){

        for(int j = 1; j<i; j++){
            printf(" ");
        }
        for(int j = 1; j <= n; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*

   * * * * 
  * * * * 
 * * * * 
* * * *

*/