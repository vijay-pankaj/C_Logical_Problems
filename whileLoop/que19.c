// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n); 

//     for(int i = 2; i <= n; i++) {
//         int count = 0;
//         for(int j = 1; j <= i; j++) {
//             if(i % j == 0) {
//                 count++;
//             }
//         }
//         if(count == 2) {
//             printf("%d ", i);  // It's a prime number
//         }
//     }

//     return 0;
// }


#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); 
int i=2;
while(i<=n){
    int count =0;
    int j=1;
    while (j<=i)
    {
        if(i%j==0)count++;
        j++;
    }
    if(count==2){
        printf("%d ",i);
    }
    i++;
}

    return 0;
}

