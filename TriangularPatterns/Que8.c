#include<stdio.h>
int main(){
    int n=4;
    // printf("enter the number :");
    // scanf("%d",&n);

    int temp =2;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i; j++){
            printf("%d ",temp);
            temp+=2;
        }
        printf("\n");
    }
    
}
/*
2 
4 6 
8 10 12 
14 16 18 20 
*/
//complete