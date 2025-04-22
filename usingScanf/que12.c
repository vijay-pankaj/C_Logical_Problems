#include<stdio.h>
int main(){
    int e;
    float a,b,c,d,f;
    printf("enter a,b,c in order:");
    scanf("%f%f%f%f%d%f",&a,&b,&c,&d,&e,&f);
    printf("sum of all is:%f",a+b*(c-d)/e+f);
}