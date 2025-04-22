#include<stdio.h>
int sumOfDigit(int n){
    // int n;
    // printf("enter number:");
    // scanf("%d",&n);
    int sum=0;
    int rem=0;
    while (n>0)
    {
       rem=n%10;
       sum+=rem;
       n = n/10;

    }
    printf("%d\n",sum);
    
}
int main(){
    sumOfDigit(1234);
    sumOfDigit(564);


}