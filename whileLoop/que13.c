// //Write a program to check whether a number is a prime number.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<1)printf("enter a valid number");
    else{

    int i=1;
    int count = 0;
    while (i<=n)
    {
        if(n%i==0){
            count++;
        }
        
        i++;
    }
    if(count>2){
        printf("the number is not prime");
    }else{
        printf("the given number is prime");
    }
}
    
}