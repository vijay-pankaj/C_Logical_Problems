//Write a program to print the numbers 1 to 100, but only print those that are divisible by 5.
#include<stdio.h>
int main(){
    for(int i=1; i<=100; i++){
        if(i%5==0){
            printf("%d ",i);
        }
    }
}