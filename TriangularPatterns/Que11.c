#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int temp=n;

    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=temp; j++){
            printf("%d ",i);
        }
        temp--;
        printf("\n");
    }
    
}
/*
1 1 1 1 
2 2 2 
3 3 
4 
*/
//complete