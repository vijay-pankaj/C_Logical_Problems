// #include<stdio.h>
// int main(){
//     int b,c;
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);

//     int i=1;
//     while (i<=10)
//     {
//         b=i;
//         c=n*b;
//         printf("%d * %d=%d\n",n,b,c);
//         i++;
//     }
    
// }


#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter a num1:");
    scanf("%d",&num1);

    printf("enter a num2:");
    scanf("%d",&num2);

    printf("enter a num3:");
    scanf("%d",&num3);

    int i=1;
    while (i<=10)
    {
        printf("%d*%d=%d      %d*%d=%d     %d*%d=%d\n",num1,i,num1*i, num2,i,num2*i ,num3,i,num3*i);
        // printf("%d*%d=%d     ",num2,i,num2*i);
        // printf("%d*%d=%d     ",num3,i,num3*i);
        i++;
    }
    
}