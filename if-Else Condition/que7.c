/*Q)write a c program input character and check character is vowel and consonant ?
vowel :a,e,i,o,u
consoant*/
#include<stdio.h>
int main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);

    if (ch=='a')
    {
    printf("character is vowel");
    }

    else if(ch=='e')
    {
    printf("character is vowel");
        
    }

    else if (ch=='i')
    {
    printf("character is vowel");    
    }

    else if (ch=='o')
    {
    printf("character is vowel");    
    }
    else if (ch=='u')
    {
    printf("character is vowel");    
    }
    else{
        printf("given character is consonent ");
    }
    
    return 0;
    
}