#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);

    int temp=(n*n+n)/2;
    for (int i = 1; i <=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ",temp--);
        }
        
        printf("\n");
    }
    
}
/*
10 
9 8 
7 6 5 
4 3 2 1 
*/