// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter nuber ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         printf("%d",i);
//         if(i%4==0){
//             printf("\n");}
//         }
   
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter nuber ");
    scanf("%d",&n);
    // for(int j=1; j<=n; j++){
    for(int i=1; i<=n*n; i++){
        printf("%d ",i);
        if(i%n==0){
    printf("\n");
        }
    }
// }
}
/*
12345
678910
1112131415
1617181920
2122232425
5*5
*/