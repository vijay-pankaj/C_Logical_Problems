/*write a c program input character :b
ball

otherwise :input is not matched*/
#include<stdio.h>
int main(){
    char n;
    printf("enter number :");
    scanf("%c",&n);

    if (n=='b')
    {
    printf("b for ball :");

    
    }
    else
    {
    printf("input is not matched");
        
    }
    return 0;
    
}