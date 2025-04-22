//Write a program to calculate the average of N numbers entered by the user.
#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int rem;
    int sum =0;
    int count=0;
    for(int i=0; 0<n;i++){
        rem=n%10;
        n=n/10;
        count++;
        sum +=rem;
    }
    printf("sum=%d , count=%d, Average=%d",sum ,count,sum/count);
}