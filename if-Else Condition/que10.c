/*Q)write a c program input character and check character is z,x,c,v,b,n,m : lower line
otherwise :input is not matched*/
#include<stdio.h>
int main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);

    if (ch=='z')
    {
    printf("input is matched");
    }
    else if(ch=='x')
    {
    printf("input is matched");
        
    }
    else if (ch=='c')
    {
    printf("input is matched");    
    }

    else if (ch=='v')
    {
    printf("input is matched");    
    }
    else if (ch=='b')
    {
    printf("input is matched");    
    }
    else if (ch=='n')
    {
    printf("input is matched");    
    }
    else if (ch=='m')
    {
    printf("input is matched");    
    }
    else{
        printf("Input is not matched ");
    }
    
    return 0;
    
}