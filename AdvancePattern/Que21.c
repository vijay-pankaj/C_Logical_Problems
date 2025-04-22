
#include<stdio.h>
int main() {
    int n = 4;
    for(int i = n; i >= 1; i--) {
        for(int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            if(i == n || i == 1 || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*

* * * * 
 *   * 
  * * 
   * 

*/
