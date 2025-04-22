// #include<stdio.h>
// int main(){
//     int n;

//     printf("enter number :");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//     int current=1;
//         for(int j=0; j<=i; j++){
//             printf(" ");
            
//         }
//         for(int k=1; k<=n-i; k++){
//             printf("%d",current);
//         current+=1;
//         }
//         printf("\n");
//     }
    
// }

#include<stdio.h>
int main(){
    int n=4;

    // printf("enter number :");
    // scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<=i; j++){
            printf(" ");
            
        }
        for(int k=1; k<=n-i; k++){
            printf("%d",k);
        }
        printf("\n");
    }
    
}


/*
1 2 3 4
  1 2 3
    1 2
      1
*/