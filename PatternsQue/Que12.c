#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int count=0;
    // int temp=31;
    for(int i=n*n*2-1;i>=1;i-=2){
        // if(i%2!=0){
            printf("%d ",i);
            count++;
        // }
        if(count%n==0){
            printf("\n");
        }
    }
}
/*
31 29 27 25 
23 21 19 17 
15 13 11 9 
7 5 3 1 
*/