#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int temp =n*n+n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i; j++){
            printf("%d ",temp);
            temp-=2;
        }
        printf("\n");
    }
    
}
/*
20 
18 16 
14 12 10 
8 6 4 2 
*/
//complete