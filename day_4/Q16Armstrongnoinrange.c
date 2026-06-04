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
int number1, number2, x;
printf("enter starting number = ");
scanf("%d", &number1);
printf("enter ending number = ");
scanf("%d", &number2);
for(int i=number1;i<=number2;i++){
    x =armstrong(i);
 if(x==i){
     printf("%d ",i);
    }
}

return 0;}