//Write a program to print the first N Fibonacci numbers using a for loop.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int a=0,b=1,temp;
    for(int i=0; i<n;i++){
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;

        }
}