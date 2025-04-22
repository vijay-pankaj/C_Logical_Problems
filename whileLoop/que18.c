#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n==0) printf("%d",n);
    
    else if(n>0){

     int   i=1;
    while (i*i<=n)
    {
        i++;
    }
    printf("the squareroot is  :%d ",i-1);
}

    
}