// Write a program that sums all the multiples of 7 between 1 and 500.
#include<stdio.h>
int main(){
    int sum =0;
    for(int i=1; i<=500; i++ ){
        if(i%7==0){
            sum+=i;
        }
    }
    printf("sums all the multiples of 7 between 1 and 500: %d",sum);
}