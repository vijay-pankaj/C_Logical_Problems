#include <stdio.h>
int main() {
  int n;
    printf("enter the number :");
    scanf("%d",&n);

    int temp =1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", temp);;
            temp++;
        }
        printf("\n");
    }

    return 0;
}
/*
      1 
    2 3 
  4 5 6 
7 8 9 10
*/