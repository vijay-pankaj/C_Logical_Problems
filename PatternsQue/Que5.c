#include<stdio.h>
int main(){
    int n;
    printf("enter nuber ");
    scanf("%d",&n);
    for(int j=1; j<=n; j++){
    for(int i=1; i<=n*2; i+=2){
        printf("%d ",i);
    }
    printf("\n");
}
}
/*
1 3 5 7 
1 3 5 7
1 3 5 7
1 3 5 7
*/