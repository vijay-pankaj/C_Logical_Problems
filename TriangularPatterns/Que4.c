// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number :");
//     scanf("%d",&n);

//     // int temp=n*2+2;
//     for(int i=1;i<=n;i++){
//         for (int j =1; j<=n*2+2; j++)
//         {
//             printf("%d",i);
//         }
        
//         printf("\n");
//     }
// }


#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    
    int temp=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",temp++);
        }
        printf("\n");
    }
}
/*
1
2 3
4 5 6
7 8 9 10
*/
//complete
