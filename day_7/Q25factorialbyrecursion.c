#include<stdio.h>
int factorial(int number){
if(number == 0 || number == 1){
    return 1;}
return number*(factorial(number-1));
}

int main(){
int number;
printf("enter number = ");
scanf("%d", &number);
int x = factorial(number);
printf("factrial of number = %d",x);
return 0;}