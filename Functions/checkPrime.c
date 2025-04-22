#include<stdio.h>
int checkPrime(int n){
    int count=0;
    int result;
    for(int i=2; i<n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        result=printf("prime\n");
    }else{
        result=printf("not prime\n");
    }

}
int main(){
    int n=3;
    checkPrime(3);
    checkPrime(4);
    checkPrime(9);
    checkPrime(7);
}