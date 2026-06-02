#include<stdio.h>
int main(){
printf("enter number = ");
int originalnumber,reversedigit=0;
scanf("%d",&originalnumber);
int number=originalnumber;

while(number != 0){
    int digitnumber = number%10;
    reversedigit = reversedigit * 10 + digitnumber;
    number= number/10;  }

if(reversedigit == originalnumber){
   printf("number is palindrome");
   }
else{  printf("number is not palindrome");}

return 0;
}
