#include<stdio.h>
int pattern( int n){
    int current=1;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n; j++){
            printf("%d",current++);
        }
        printf("\n ");
    }
}
int main(){
    pattern(4);
}