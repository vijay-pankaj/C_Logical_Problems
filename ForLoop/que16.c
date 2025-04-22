#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter a num1:");
    scanf("%d",&num1);

    printf("enter a num2:");
    scanf("%d",&num2);

    printf("enter a num3:");
    scanf("%d",&num3);

    for (int i = 1; i <=10; i++)
    {
        printf("%d*%d=%d      %d*%d=%d     %d*%d=%d\n",num1,i,num1*i, num2,i,num2*i ,num3,i,num3*i);
    }
    

}