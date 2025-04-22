//Write a program to find the product of all odd numbers from 1 to N.
#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    int product=1;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            product*=i;
        }
    }
    printf("product of all odd number between n :%d",product);
}