#include<stdio.h>
int main(){
    int n=4;
    // printf("enter number :");
    // scanf("%d",&n);
    int current=n*n+n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
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