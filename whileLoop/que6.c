/*Write a program that computes the sum of integers from 1 to N, where N is provided by
the user.*/
#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);

    int i=1;
    int sum =0;
    while (i<=n)
    {
        sum+=i;
        // sum=n*(n+1)/2;
        i++;
    }
    printf("%d",sum);
    return 0;
}