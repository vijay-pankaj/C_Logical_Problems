#include<stdio.h>
int FullPyramid(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }

        for(int j=2; j<=n; j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
/*

full pyramid
        *
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 

*/

int RevFullPyramid(int n){
    for(int i=n; i>=1;i--){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }

        for(int j=2; j<=n; j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/
int main(){
    printf("full pyramid\n");
    FullPyramid(5);
    printf("reverse of full pyramid\n");
    RevFullPyramid(5);
}