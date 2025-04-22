#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int count=0;
    for(int i=1;i<(n*n)*2;i+=2){
        printf("%d",i);
        count++;
        if(count%n==0){
            printf("\n");
        }
    }
}
/*
1357
9111315
17192123
25272931
*/