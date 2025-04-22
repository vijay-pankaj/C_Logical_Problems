#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);

    int current=n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf(" ");
        }
        for(int k=1; k<=n-i; k++){
            printf("%d",current);
        }
        current-=1;
        printf("\n");
    }
}

/*
 4444
  333
   22
    1
*/