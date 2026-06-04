#include<stdio.h>
int fibonacci(int n){
if(n == 0 || n == 1){
 return n;}
 else{return fibonacci(n-1) + fibonacci(n-2);}
}

int main(){
int number, x;
printf("enter  terms number you want = ");
scanf("%d", &number);
printf("fibonacci term is = ");


x = fibonacci(number-1);
printf("%d ",x);
return 0;}
