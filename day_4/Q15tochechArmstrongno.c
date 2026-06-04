#include<stdio.h>
#include<math.h>
int armstrong(int number){ 
    int originalnumber = number, sum=0,x=0,y=0;
 while(number>0){
  x++;
  number = number/10;}

  for(int i=1; i<=x; i++){
  y= originalnumber%10;
  if(x==3){
     sum = sum + y*y*y;
  } else{ sum = sum + pow(y,x);}
   originalnumber = originalnumber/10;}

return sum;
}


int main(){
int number, x;
printf("enter number terms you want to check = ");
scanf("%d", &number);
x =armstrong(number);
if(x==number){
    printf("number is armstrong number");
}
else{
    printf("number is not armstrong number");}


return 0;}