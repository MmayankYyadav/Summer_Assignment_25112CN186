#include<stdio.h>
int main(){
printf("enter number = ");
int number,product=1;
scanf("%d",&number);


while(number != 0){
    int digitnumber = number%10;
    product = product * digitnumber;
    number= number/10;  
}
printf("product of digits of number is = %d",product);
return 0;
}