#include<stdio.h>
int main(){
int number,x=0;
printf("enter number = ");
scanf("%d", &number);
for(int i=2;i<number;i++){
if(number%i == 0){
  x=x+1;
break; }
}
if(x==0){
    printf("number is prime number");
}
else{printf("number is not prime number");}

return 0;}