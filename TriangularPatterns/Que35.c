#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int current=2;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            if(j<=i){
            printf("%d ",current);
            current+=2;
            }else{
                printf("  ");
            }       
         }

        printf("\n");
    }
}

/*
2 4 6 8 
  10 12 14 
    16 18 
      20 
*/