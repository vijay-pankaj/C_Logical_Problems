/*Write a program that computes the sum of integers from 1 to N, where N is provided by
the user.*/
#include<stdio.h>
int main(){
    int n;
    printf("enter number to add between number 1 to n:");
    scanf("%d",&n);
    
    int sum=0;
    for(int i=1; i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}