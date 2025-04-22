/*Q)write a c program input character and check character is q,w,e,r,t,y,u,i,o,p : upper line
otherwise :input is not matched*/
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter character :");
//     scanf("%c",&ch);

//     if (ch=='q')
//     {
//     printf("input is matched");
//     }
//     else if(ch=='w')
//     {
//     printf("input is matched");
        
//     }
//     else if (ch=='e')
//     {
//     printf("input is matched");    
//     }

//     else if (ch=='r')
//     {
//     printf("input is matched");    
//     }
//     else if (ch=='t')
//     {
//     printf("input is matched");    
//     }
//     else if (ch=='y')
//     {
//     printf("input is matched");    
//     }
//     else if (ch=='u')
//     {
//     printf("input is matched");    
//     } else if (ch=='i')
//     {
//     printf("input is matched");    
//     } else if (ch=='o')
//     {
//     printf("input is matched");    
//     } else if (ch=='p')
//     {
//     printf("input is matched");    
//     }
//     else{
//         printf("Input is not matched ");
//     }
    
//     return 0;
    
// }


#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    // Check if the character is one of q, w, e, r, t, y, u, i, o, p
    if (ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' ||
        ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p') {
        printf("Upper line\n");
    } else {
        printf("Input is not matched\n");
    }
    
    return 0;
}
