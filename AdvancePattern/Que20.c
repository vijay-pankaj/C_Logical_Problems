#include <stdio.h>

int main() {
    int n = 6;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            if (j > i) {
                printf(" ");
            } else {
                if (i == n || j == 1 || j == i) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
/*
     * 
    * *
   *   *
  *     *
 *       *
* * * * * *
*/