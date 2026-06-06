#include<stdio.h>
int main(){
     int number,power,product=1;
    printf("enter number = ");
    scanf("%d",&number);
       printf("enter power = ");
    scanf("%d",&power);
    
    for( int i=1; i<=power;i++){
        product = product*number;
    }
    printf("number %d power %d raised is = %d",number,power,product);
    return 0;}