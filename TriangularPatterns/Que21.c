#include <stdio.h>
int main() {
  int n;
    printf("enter the number :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", n - i);
        }
        printf("\n");
    }

    return 0;
}


/*
      4
    3 3
  2 2 2
1 1 1 1
*/