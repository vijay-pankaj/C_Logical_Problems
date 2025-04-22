// Write a program to calculate the power of a number (x^y) using a while loop.c
#include<stdio.h>
int main(){
    int x,y;
    printf("enter power :");
    scanf("%d",&y);

    if(y<=0){
        printf("enter a positive number");
    }
    else{
    printf("enter a number:");
    scanf("%d",&x);

    int i=1;
    int p=1;
    while (i<=y)
    {
        p=p*x;
        i++;
    }
    printf("solution is %d", p);
}

}