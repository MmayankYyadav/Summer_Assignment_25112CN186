#include<stdio.h>
#include<math.h>
int reversenum(int number,int currentsum){
if(number == 0){return currentsum;}
return reversenum(number/10,(currentsum*10)+number%10);
}

int main(){
printf("enter number = ");
int number,originalnum, currentsum=0;
scanf("%d",&number);
originalnum = number;


int sum = reversenum(originalnum,currentsum);
printf("reversed number is = %d",sum);
return 0;
}