#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int temp=n;

    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=temp; j++){
            printf("%d ",j);
        }
        temp--;
        printf("\n");
    }
    
}
/*
1 2 3 4 
1 2 3 
1 2 
1
*/
//complete