#include<stdio.h>
int main(){
int number, sum=0;
printf("enter a number = ");
scanf("%d", &number);

for(int i=1;i<number;i++){
if(number%i==0){
    sum  = sum + i;
}
}
printf("Sum of all divisors of %d is = %d", number, sum);
if(sum==number){
    printf("\n%d is a perfect number.", number);
}
else{
    printf("\n%d is not a perfect number.", number);
}
return 0;}