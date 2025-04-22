/*Q)write a c program input character 'd':
two number
divide
otherwise :input is not matched*/
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if (ch=='d')
    {
        int num1,num2;
        printf("enter first number:");
        scanf("%d",&num1);

        printf("enter first number:");
        scanf("%d",&num2);
        
        printf("divide  num1 by num2 is:%d",num1/num2);       
    }
    else
    {
        printf("input is not matched");
    }
    
}