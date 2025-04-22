//Write a program to compute the sum of all even numbers between 1 and 100.
#include<stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    while (i<=100)
    {
        if (i%2==0)
        {
           sum+=i;
            
        }
        i++;
    }
    printf("%d ",sum);
    

    return 0;
}