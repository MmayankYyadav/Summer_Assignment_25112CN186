#include<stdio.h>
int factorial(int n){
    int factorial=1;
    for(int i =1 ; i<=n ;i++){
    factorial = factorial * i;
}
return factorial;
}
int main(){
printf("enter number = ");
int originalnumber,number,sum=0;
scanf("%d",&number);
originalnumber = number;
int digit;
while(number != 0){
    digit = number % 10;
    sum = sum + factorial(digit);
    number = number / 10;
}
printf("sum of factorial of digits in number is = %d",sum);
if(sum == originalnumber){
    printf("\n%d is a strong number.", originalnumber);
}
else{
    printf("\n%d is not a strong number.", originalnumber);
}
return 0;
}
