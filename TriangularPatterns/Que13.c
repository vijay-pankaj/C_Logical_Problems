#include<stdio.h>
int main(){
    int n=4;
    // printf("enter the number :");
    // scanf("%d",&n);

    int temp=n;
    int current=1;
    for (int i = 1; i<=n; i++)
    {
        for(int j=1; j<=temp; j++){
            printf("%d ",current);
            current+=1;
        }
        temp--;
        printf("\n");
    }
    
}
/*
1 2 3 4
5 6 7 
8 9 
10
*/
//complete