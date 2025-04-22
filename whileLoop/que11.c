//Write a program to compute the factorial of a given number using a while loop.
#include<stdio.h>
int main(){
    int i=1,n,factorial=1;
    printf("enter a number:");
    scanf("%d",&n);

    while (i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    printf("factorial of n number is: %d",factorial);
    
}