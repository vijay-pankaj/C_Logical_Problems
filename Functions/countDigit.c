#include<stdio.h>
int coutDigitOfNum(int n){
    int count =0;
    while(n>0){
        n=n/10;
        count++;
    }
    printf("%d",count);

}
int main(){
    coutDigitOfNum(12344);
}