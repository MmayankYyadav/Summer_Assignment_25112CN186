#include<stdio.h>
int fibonacci(int n){
if(n == 0 || n == 1){
 return n;}
 else{return fibonacci(n-1) + fibonacci(n-2);}
}

int main(){
int number, x;
printf("enter number fibonacci terms you want = ");
scanf("%d", &number);
printf("fibonacci series is = ");

for(int i=0;i<number;i++){
x = fibonacci(i);
printf("%d ",x);
}
return 0;}