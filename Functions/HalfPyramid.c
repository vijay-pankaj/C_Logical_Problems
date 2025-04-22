#include<stdio.h>
// ****************Right-Half-Pyramid********************
int RightHalfPyramid(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n; j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*

*         
* *       
* * *     
* * * *   
* * * * * 

*/
//***********************Left-Half-Pyramid**************

int leftHalfPyramid(int n){
    for(int i=1; i<=n; i++){
        for(int j=n;j>=1; j--){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*

          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *

*/
// ********* Reverse-Right-Half-Pyramid ***************
int revRightHalf(int n){
    for(int i=n; i>=1; i--){
        for(int j=1;j<=n; j++){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*

* * * * *
* * * *
* * *
* *
*

*/

// **************reverse-left-Half-Pyramid*************
int revleftHalfPyramid(int n){
    for(int i=n; i>=1; i--){
        for(int j=n;j>=1; j--){
            if(j<=i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
/*

* * * * *
  * * * *
    * * *
      * *
        *

*/

int main(){
    printf("Right-Half-Pyramid\n");
    RightHalfPyramid(5);

    printf("Left-Half-Pyramid\n");
    leftHalfPyramid(6);

    printf("Reverse-Right-Half-Pyramid\n");
    revRightHalf(5);
    
    printf("Reverse-Left-Half-Pyramid\n");
    revleftHalfPyramid(5);

}

