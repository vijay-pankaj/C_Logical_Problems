#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int count=0;
    for(int i=2;i<=(n*n)*2; i+=2){
        printf("%d ",i);
        count++;
        if(count%n==0){
            printf("\n");
        }
    }
}
/*
2 4 6 8 
10 12 14 16 
18 20 22 24 
26 28 30 32 
*/