#include<stdio.h>
int main(){
    int n=4; 
    // printf("enter number:");
    // scanf("%d" ,&n);

    int temp =2;
    for(int i=1;  i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d ",temp);
                temp+=2;
            }
            else{
            printf("   ");
            }
        
        }
        
        printf("\n");
    }
}

/*
   2
  46
 81012
14161820
*/