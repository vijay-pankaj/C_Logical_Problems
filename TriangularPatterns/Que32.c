#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int current=(n*n+n)/2;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            if(j<=i){
            printf("%d ",current);
            current-=1;
            }else{
                printf("  ");
            }       
         }

        printf("\n");
    }
}

/*
10 9 8 7 
  6 5 4
    3 2 
      1
*/