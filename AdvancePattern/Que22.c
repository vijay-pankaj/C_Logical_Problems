#include<stdio.h>
int main(){
    int n=6;
    for (int i = 1; i <=n; i++)
    {
        for(int j=n; j>=1; j--){
            if(j<=i){
               if(i==j||j==1) printf("* ");
               else printf("  ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=n-1; i>=1; i--){
      for(int j=n; j>=1; j--){
          if(j<=i){
            if(i==j||j==1) printf("* ");
            else printf("  ");
          }else{
              printf(" ");
          }
      }
      printf("\n");
  }
    
}

/*

     * 
    * *
   *   *
  *     *
 *       *
*         *
 *       *
  *     *
   *   *
    * *
     *

*/