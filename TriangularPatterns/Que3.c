#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

/*
4
33
222
1111
*/
//complete
