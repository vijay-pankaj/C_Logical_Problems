//Print the even numbers from 2 to 20 using a while loop.
#include<stdio.h>
int main(){
    int i=2;
    while (i<=20)
    {
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }
    
}