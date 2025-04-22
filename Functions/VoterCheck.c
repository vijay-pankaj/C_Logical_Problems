#include<stdio.h>
int CheckVoterValid( int age){
    if(age>=18){
        printf("He can vote:\n");
    }else{
        printf("Chote bache ho abhi %d year baad aana:\n",18-age);
    }
}
int main(){
    CheckVoterValid(13);
    CheckVoterValid(18);
    CheckVoterValid(23);
}