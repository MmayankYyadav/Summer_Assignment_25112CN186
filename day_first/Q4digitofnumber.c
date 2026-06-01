#include<stdio.h>
int main(){
printf("enter number = ");
int number,count=0;
scanf("%d",&number);
int numberf =number;

while(number != 0){
    count++;
    numberf = number/10;
    number=numberf;   
}
printf("digit in number are = %d",count);
return 0;
}