//Write a program to calculate the average of N numbers entered by the user.
#include<stdio.h>
int main(){
    // int n;
    // int i=1;
    // float sum = 0,average;
    // printf("enter number of element: ");
    // scanf("%d",&n);

    // while (i<=n)
    // {
    // sum +=i;
    // i++;
    // }
    // printf("%f",sum);
    // average=sum/n;
    // printf("Average of n numbers:%f",average);
    
    int n;
    float sum=0 ,average,num;
    printf("enter number of element:");
    scanf("%d",&n);

    int i=1;

    if(n<=0){
        printf("enter a valid number");
    }

    while (i<=n)
    {
        printf("enter number:"); 
        scanf("%f",&num);
        sum+=num;
        i++;
    }
    printf(" total sum of numbers: %f\n",sum);

    average=sum/n;
    printf("Average of number %f ",average);
    
    return 0;
}