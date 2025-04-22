#include<stdio.h>
int main(){
    int n=4;
    int current=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
           if(j<=i){
            printf("%d ",current);
            current++;
           }else{
            printf("  ");
           }
        }
        printf("\n");
    }
}

/*
1    
2 3   
4 5 6  
7 8 9 10 
*/