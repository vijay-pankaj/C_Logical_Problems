#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int current=n*n+n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            if(j<=i){
            printf("%d ",current);
            current-=2;
            }else{
                printf("  ");
            }       
         }

        printf("\n");
    }
}

/*
enter number :4
20 18 16 14 
  12 10 8 
    6 4 
      2 
*/