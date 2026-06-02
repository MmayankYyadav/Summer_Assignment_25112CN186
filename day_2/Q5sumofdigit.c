#include<stdio.h>
int main(){
printf("enter number = ");
int number,sum=0;
scanf("%d",&number);

while(number != 0){
sum = sum + number%10;
    number = number/10; 
}
printf("sum of digit in number is = %d",sum);
return 0;
}
