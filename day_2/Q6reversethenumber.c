#include<stdio.h>
int main(){
printf("enter number = ");
int number,reversedigit=0;
scanf("%d",&number);


while(number != 0){
    int digitnumber = number%10;
    reversedigit = reversedigit * 10 + digitnumber;
    number= number/10;  
}
printf("reversed number is = %d",reversedigit);
return 0;
}
