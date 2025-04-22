//Write a program to compute the sum of digits of a given number.

#include<stdio.h>
int main(){
int n;
int sum=0,num;
printf("How many digit do you want to sum:");
scanf("%d",&n);

int i=1;

if(n<=0){
    printf("enter a valid number");
}

while (i<=n)
{
    printf("enter number:");
    scanf("%d",&num);
    sum+=num;
    i++;
}
printf("sum of Given Digits: %d\n",sum);
return 0;
}