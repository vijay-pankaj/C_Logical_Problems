/*Q)write a c program input character 'w':
two number
swap number with third variable
otherwise :input is not matched*/
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if (ch=='s')
    {
        int temp,num1,num2;
        printf("enter num1:");
        scanf("%d",&num1);

        printf("enter num2:");
        scanf("%d",&num2);

        temp=num1;
        num1=num2;
        num2=temp;
        printf("swap of number is:num1=%d,num2=%d",num1,num2);
    }
    else
    {
        printf("input is not matched");
    }
    
}