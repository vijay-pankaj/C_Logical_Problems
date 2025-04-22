//Write a program to print the first N Fibonacci numbers using a while loop.
#include<stdio.h>
int main(){
    int n;
    printf("enter number to print fibonacci:");
    scanf("%d",&n);

    int i=0;
    int a=0 ,b=1,temp;
    while (i<n)
    {
        printf("%d ",a);
        temp=a+b; 
        a=b;
        b=temp;
        // printf("%d ",temp);
        i++;
    }
    return 0;
    
}