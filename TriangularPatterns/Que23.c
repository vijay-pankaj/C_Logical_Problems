#include <stdio.h>
int main() {
  int n;
    printf("enter the number :");
    scanf("%d",&n);

    int temp=(n*n+n)/2;
    for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1; j++){
            printf("  ");
        }
        for(int k=0;k<=i; k++){
            printf("%d ",temp);
            temp--;
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