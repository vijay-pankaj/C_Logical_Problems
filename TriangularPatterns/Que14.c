#include<stdio.h>
int main(){
    int n =4;
    // printf("enter the number :");
    // scanf("%d",&n);

    int temp=n;
    int current=(n*n+n)/2;

    for (int i = n; i >= 1; i--)
    {
        for(int j=1;j<=temp; j++){
            printf("%d ",current);
            current-=1;
        }
        temp--;
        printf("\n");
    }
    
}
/*
10 9 8 7
6 5 4
3 2 
1
*/ 