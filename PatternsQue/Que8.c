#include<stdio.h>
int main(){
    int n;
    printf("enter nuber ");
    scanf("%d",&n);
    for(int j=1; j<=n; j++){
    for(int i=n*2; i>=2; i-=2){
        printf("%d ",i);
    }
    printf("\n");
}
}
/*
8642
8642
8642
8642
*/