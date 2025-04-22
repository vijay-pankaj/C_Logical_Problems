// Write a program to calculate the power of a number (x^y) using a while loop.c
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter power y:");
    scanf("%d",&y);
    if (y<0)
    {
        printf("enter a positive number:");
    }
    printf("Enter number x:");
    scanf("%d",&x);

    int p=1;
    for(int i=0; i<y; i++){
        p=p*x;
    }
    printf("%d",p);
    
}