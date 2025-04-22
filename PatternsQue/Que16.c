#include<stdio.h>
int main(){
    int n;
    printf("enter nuber ");
    scanf("%d",&n);
    for(int j=1; j<=n; j++){
    for(int i=65; i<=65+n-1; i++){
        printf("%c",i);
    }
    printf("\n");
}
}