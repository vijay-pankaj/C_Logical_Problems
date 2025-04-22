#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d",i);
            }else{
                printf(" ");
            }
                }
        printf("\n");
    }

}
/*
   1
  22
 333
4444
*/