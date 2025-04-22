#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int current=1;
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
1 3 5 7 
  9 11 13
    15 17
      19
*/