#include<stdio.h>
int main(){
    int n=4;
    // printf("enter number:");
    // scanf("%d",&n);
    int temp =n;
 int current=1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=temp; j++){
            printf("%d ",current);
            current=current+2;
        }
        temp--;
        printf("\n");
    }
    
}

/*
1 3 5 7 
9 11 13 
15 17 
19
*/