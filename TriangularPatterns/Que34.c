#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int current=n*n+n-1;
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
19 17 15 13 
  11 9 7 
    5 3 
      1 
*/