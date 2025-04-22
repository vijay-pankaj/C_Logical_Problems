#include<stdio.h>
int main(){
    int n;
    printf("enter nuber ");
    scanf("%d",&n);
    // for(int j=1; j<=n; j++){
    for(int i=n*n; i>=1; i--){
        printf("%d ",i);
        if(i%n==1){
    printf("\n");
        }
    }
// }
}
/*
16151413
1211109
8765
4321
*/