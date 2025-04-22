#include<stdio.h>
int main(){
    int n,k;
    printf("Enter number:");
    scanf("%d",&n);

    printf("Enter k(rotation):");
    scanf("%d",&k);

    int temp=n, count=0;
    for(int i=0; 0<temp; i++){
        temp=temp/10;
        count++;
    }
    printf("count is:%d\n",count);

    int p=1;
    for(int j=0;j<count-1; j++){
        p=p*10;
    }
    printf("power :%d\n",p);

    if(k<0)k=k+count;
    for(int m=0;m<k;m++){
       n=(n%10)*p+n/10;
    }
printf("%d",n);
}