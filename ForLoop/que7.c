//Write a program to compute the sum of all even numbers between 1 and 100.
#include<stdio.h>
int main(){
    int sumOfEven=0;
    for(int i=1; i<=100;i++){
        if(i%2==0){
            sumOfEven+=i;
        }
    }
    printf("%d",sumOfEven);
}