// #include <stdio.h>
// int main() {
//   int n;
//     printf("enter the number :");
//     scanf("%d",&n);

//     int current =1;
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n-i-1; j++){
//             printf("  ");
//         }
//         for(int k=0;k<=i; k++){
//             printf("%d ",current);
//             current+=2;
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int current=1;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d ",current);
                current+=2;
            }else{
                printf("  ");
            }
                }
        printf("\n");
    }

}

/*
      1 
    3 5 
  7 9 11 
13 15 17 19 
*/