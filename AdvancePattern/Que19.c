#include<stdio.h>
int main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        for(int j = i; j <= n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = 2; i <=n; i++)
    {
        int temp=n;
        for(int j=n; j>=1; j--){
            if(j<=i){
               printf("%d ",temp--);
            }
            
            else{ 
                printf(" ");
            }

        }

        printf("\n");
    }
    return 0;
}


/*

1 2 3 4 
 2 3 4
  3 4
   4
  4 3
 4 3 2
4 3 2 1

*/