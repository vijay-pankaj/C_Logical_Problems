#include<stdio.h>
int main(){
    int n=4;
    // printf("enter number:");
    // scanf("%d",&n);
    int temp = n;
    int current=n*n+n-1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=temp; j++){
            printf("%d ",current);
            current-=2;
        }
        temp--;
        printf("\n");
    }
    
} 
/* n=5
29 27 25 23 21 
19 17 15 13 
11 9 7 
5 3 
1
*/