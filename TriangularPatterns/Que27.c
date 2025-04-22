#include<stdio.h>
int main(){
    int n=4;
    // printf("enter number :");
    // scanf("%d",&n);

    int current=n*n+n;;
    for(int i=1; i<=n; i++){
        for(int j=n;j>=1; j--){
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
   20
  1816
 141210
8642
*/