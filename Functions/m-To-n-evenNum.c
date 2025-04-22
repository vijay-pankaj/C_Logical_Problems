#include<stdio.h>
int mToNEvenNum(int m, int n){
    for(int i=m; i<=n; i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}
int main(){
    // mToNEvenNum(2,10);

    mToNEvenNum(1,100);
}