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
            current+=1;
            }else{
                printf("  ");
            }       
         }

        printf("\n");
    }
}
/*
1 2 3 4
  5 6 7
    8 9
     10
*/