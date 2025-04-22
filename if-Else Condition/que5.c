/*write a c program input character :a
apple

otherwise :input is not matched*/
#include<stdio.h>
int main(){
    char n;
    printf("enter number :");
    scanf("%c",&n);

    if (n=='a')
    {
    printf("a for apple :");

    
    }
    else
    {
    printf("input is not matched");
        
    }
    return 0;
    
}