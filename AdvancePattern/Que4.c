#include<stdio.h>
int main(){
    int n=4;
    for(int i=n;i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j<=i){
                printf("%d ",j);
            }else{
                printf("  ");;
            }
        }
        printf("\n");
    }
}

/*
1234
123
12
1

*/