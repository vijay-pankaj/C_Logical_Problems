// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number:");
//     scanf("%d",&n);

//     int k;
//     printf("enter a number:");
//     scanf("%d",&k);
    
//     // int i=1;
//     // int rem;
//     // int rev=0;
//    /*while (i<=k)
//     {
//         rem = n%10; 
//         // rev = rev * 10 + rem;
//         // n = (rem * power) + (n / 10); // Move last digit to front
//         //1234 4000+123 4*1000
//         //n=10*10
//         n=n/10;
//         i++;
        
//     // }*/
//     int temp=n;
//     int count=0;
//     while (temp>0)
//     {
//         temp=temp/10;
//         count++;
//     }
//     printf("total number in given number is %d ",count);
//     // printf("total number in given number is %d ",n);



//     int power =1;
//     int digit=count;
//     while (digit-1>0)
//     {
//         power=power*10;
//         digit--;
//     }   
//     printf("the power is%d ",power); 

//     k=k%count;
    
//     while (k>0)
//     {
//         int rem=0;
//         rem=n%10;
//         n=(rem*power)+(n/10);
//         k--;
//     }

//     printf("%d",n);
    
// }

#include<stdio.h>
int main(){
    int n,k;
    printf("please enter your  number: ");
    scanf("%d",&n);

    printf("please enter k(rotaion)  number: ");
    scanf("%d",&k);

    int temp=n;
    int count=0;
    while (temp>0)
    {
        temp=temp/10;
        count++;
    }
    // printf("The total integers in give number is = %d\n ",count);y
    k=k%count;

    int power=1;
    while (count-1>0)
    {
        power=power*10;
        count--;
    }
    // printf("The Total power is%d\n",power);
    if(k>0){
    while (k>0)
    {
        int rem=n%10;
        n=(rem*power)+n/10;
        k--;
    }
    printf("the new number is: %d",n);
    }

    else{
            while (k < 0) {
                int First_rem = n/power;
                n = (n % power) * 10 + First_rem;
                k++;
            }
            printf("The new number  first to last is: %d\n", n);
        }
        
    
}