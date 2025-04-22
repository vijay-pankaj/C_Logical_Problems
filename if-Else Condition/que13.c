/*Q)write a c program input character 'm':
two number
multiplication
otherwise :input is not matched*/
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if (ch=='m')
    {
        int num1,num2;
        printf("enter first number:");
        scanf("%d",&num1);

        printf("enter first number:");
        scanf("%d",&num2);
        
        printf("Multiplication of num1 and num2 is:%d",num1*num2);       
    }
    else
    {
        printf("input is not matched");
    }
    
}