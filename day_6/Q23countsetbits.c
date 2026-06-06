#include<stdio.h>
int main(){
    printf("enter number = ");
    int number,count=0;
    scanf("%d",&number);
    int numberf =number;
    while(number >0){if(number%2 == 1){ 
        count++;} 
    number = number/2;}
    printf("set bits in number are = %d",count);
    return 0;}