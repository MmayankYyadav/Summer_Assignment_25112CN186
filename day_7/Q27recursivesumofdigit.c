#include<stdio.h>
int sumofdigit(int number){
if(number == 0){return 0;}
return ((number%10)+sumofdigit(number/10));}

int main(){
printf("enter number = ");
int number;
scanf("%d",&number);
int sum = sumofdigit(number);
printf("sum of digit in number is = %d",sum);
return 0;
}
