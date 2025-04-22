/*Q)write a c program input character and check character is a,s,d,f,g,h,j,k,l : mid line
otherwise :input is not matched*/
#include<stdio.h>
int main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);

    if (ch=='a')
    {
    printf("input is matched");
    }
    else if(ch=='s')
    {
    printf("input is matched");
        
    }
    else if (ch=='d')
    {
    printf("input is matched");    
    }

    else if (ch=='f')
    {
    printf("input is matched");    
    }
    else if (ch=='g')
    {
    printf("input is matched");    
    }
    else if (ch=='h')
    {
    printf("input is matched");    
    }
    else if (ch=='j')
    {
    printf("input is matched");    
    } else if (ch=='k')
    {
    printf("input is matched");    
    } else if (ch=='l')
    {
    printf("input is matched");    
    } 
    else{
        printf("Input is not matched ");
    }
    
    return 0;
    
}