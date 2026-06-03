#include<stdio.h>
int isprime(int number){
    if(number<=1){
        return 0;
    }
    for(int i=2;i<number;i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}
    


int main(){
int number,number1,number2, count=0;
printf("enter starting number = ");
scanf("%d", &number1);
printf("enter ending number = ");
scanf("%d", &number2);
  
for(int i=number1;i<=number2;i++){
if(isprime(i)){
  count++;
}
}

printf("\nprime numbers from %d to %d are = %d ", number1, number2, count);

return 0;}