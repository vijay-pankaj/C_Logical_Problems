#include<stdio.h>
int squareRoot(int n){
    if(n==0) printf("%d",n);
    
    else if(n>0){

     int   i=1;
    while (i*i<=n)
    {
        i++;
    }
    printf("the squareroot is  :%d\n",i-1);
}   
}

int main(){
    squareRoot(8);
    squareRoot(4);
    squareRoot(9);
}