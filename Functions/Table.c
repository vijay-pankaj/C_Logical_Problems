#include<stdio.h>
int tableOfNum(int n){
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n ", n,i,n*i);
    }
}
int main(){
    tableOfNum(4);
    tableOfNum(2);
}