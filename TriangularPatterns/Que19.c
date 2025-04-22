#include<stdio.h>
int main(){
    int n=4;
    // printf("enter number:");
    // scanf("%d",&n);
    // int temp =n;
    // int current=1;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i; j--){
            printf(" ");
        }
        for(int k=i;k>0; k--){
        printf("%d",k);
        }
    printf("\n");   

    }
}

/*
       1
     2 1
   3 2 1
 4 3 2 1
*/
// #include<stdio.h>
// int main(){
//   int n;
//   int temp=n;
//   printf("enter number :");
//   scanf("%d",&n);
//   for(int i =1; i<=temp-1; i++){
//     printf(" ");
//     temp--;
//     for(int j=1; j>i; j++){
//       printf("%d",i);
//     }
//     printf("\n");
//   }
// }

// #include<stdio.h>
// int main(){
//   int n;
//   printf("enter number :");
//   scanf("%d",&n);
// int temp=n;
//   for (int i=1; i<=n; i++)
//   {
//     for(int j=1; j<temp-1; j++){
//       printf(" ");
//     }
//     temp--;
//     printf("%d",);
//     printf("\n");
//   }
  
// }