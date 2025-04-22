//Write a program to find the product of all odd numbers from 1 to N.
#include<stdio.h>
int main(){
    int i=1,n;
    int product=1;
    printf("enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        product*=i;
        i+=2;

    }
    printf("%d",product);
    
}