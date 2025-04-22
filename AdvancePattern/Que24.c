#include<stdio.h>
int main(){
    int x=11;//number
    int y=3;//power
    int p=1;
    int n=4;
     for (int i = 1; i <=n; i++)
    {
        printf(" %d",p);
        p*=x;
        printf("\n");
    }
}