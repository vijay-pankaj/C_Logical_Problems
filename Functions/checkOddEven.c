#include<stdio.h>
    int checkOddEven(int n){
        if(n%2==0){
            printf("Even Number\n");
        }else{
            printf("Odd Number\n");
        }
    }

int main(){

    checkOddEven(4);
    checkOddEven(3);
    checkOddEven(7);
    }

