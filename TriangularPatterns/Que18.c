#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int temp = n;
    int current=n*n+n;
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
/* n=4
20 18 16 14 
12 10 8 
6 4 
2

n=5
30 28 26 24 22 
20 18 16 14 
12 10 8 
6 4 
2
*/