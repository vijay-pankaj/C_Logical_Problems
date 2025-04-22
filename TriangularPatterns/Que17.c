#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int temp = n;
    int current=2;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=temp; j++){
            printf("%d ",current);
            current+=2;
        }
        temp--;
        printf("\n");
    }
    
}
/*
2 4 6 8 
10 12 14
16 18
20
*/