#include<stdio.h>
int factorialOfNum(int n){
    // int n=4;
    int fact=1;
    // for(int i=0; i<n;){
    //     fact*=n;
    //     n--;
    // }
    while (n>0)
    {
        fact*=n;
        n--;
    }
    printf("%d\n",fact);
    
}
int main(){
    factorialOfNum(5);
    factorialOfNum(4);
}