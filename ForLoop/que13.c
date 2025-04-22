// //Write a program to check whether a number is a prime number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int count =0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {        
            count++;
        }
        
    }
    if(count==0){
        printf("Given number is prime;");
    }else
    {
        printf("Given number is not prime;");
    }
    
    
}