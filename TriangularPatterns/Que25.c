#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
    int current=n*n+n-1;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d",current);
                current-=2;
            }else{
                printf(" ");
            }
                }
        printf("\n");
    }

}
/*
   19
  1715
 13119
7531
*/