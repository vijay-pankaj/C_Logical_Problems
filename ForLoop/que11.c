//Write a program to compute the factorial of a given number using a for loop.
#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("factorial of given number is %d",fact);
} 