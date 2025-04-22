//Write a program to compute the sum of digits of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("how many number do you want to enter:");
    scanf("%d",&n);
    // int num;
    int sum=0;
    int rem=0;
    for( int i=0; 0<n;i++){
        // printf("enter number:");
        // scanf("%d",&num);
        // sum+=num;
        rem=n%10;
        n=n/10;
        sum +=rem;
    }

    printf("Sum of numbers is %d",sum);
}