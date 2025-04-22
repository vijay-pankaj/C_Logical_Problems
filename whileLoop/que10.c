// Write a program that sums all the multiples of 7 between 1 and 500.
#include<stdio.h>
int main(){
    int i=1;
    int sum = 0;
    while (i<=500)
    {
        if(i%7==0){
            sum+=i;
        }
        i++;
    }
    printf("%d",sum);
    
}