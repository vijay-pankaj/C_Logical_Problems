#include<stdio.h>
int main(){
    int n;
    printf("enter nuber ");
    scanf("%d",&n);
    int temp=n;
    for(int temp=n; temp>=1; temp--){
    for(int i=1; i<=n; i++){
        printf("%d",temp);
    }
    printf("\n");
}
}
/*
4444
3333
2222
1111
*/