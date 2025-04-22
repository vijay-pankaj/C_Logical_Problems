#include<stdio.h>
int main(){
    int b,c,d;
    float a,e,f;
    printf("enter a,b,c in order:");
    scanf("%f%d%d%d%f%f",&a,&b,&c,&d,&e,&f);
    printf("solution:%f",a*(b-c)/d+e-f);
}