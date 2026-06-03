#include<stdio.h>
int main(){
int number1,number2, gcd=1;
printf("enter first number = ");
scanf("%d", &number1);
printf("enter second number = ");
scanf("%d", &number2);
for(int i=1;i<=number1 &&i<=number2;i++){
if(number1%i==0 && number2%i==0){
    gcd =i;
}}
printf("GCD of numbers %d and %d is = %d", number1, number2, gcd);
return 0;}