// #include<stdio.h>
// int main(){
//     int n;
//     int count=0;
//     printf("enter a number:");
//     scanf("%d",&n);
//    while (n!=0)
//    {
//     // n/=10;
//     count++;
//     n=n/10;
//    }
// printf("%d",count);   
// }
#include<stdio.h>
int main(){
    int n;
    int rem=0;
    printf("enter a number:");
    scanf("%d",&n);
   while (n!=0)
   {
    rem = n%10;
    n/=10;
    printf("%d ",rem);
   }
}