#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    int count=0;
    for(int i=(n*n)*2; i>=2; i-=2){
        printf("%d ",i);
        count++;
        if(count%n==0){
            printf("\n");
        }
    }
}
/*
Enter number: 4
32 30 28 26 
24 22 20 18 
16 14 12 10 
8 6 4 2 
*/