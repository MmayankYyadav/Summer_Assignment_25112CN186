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
int number,x=0,largestprimefactor;
printf("enter number = ");
scanf("%d", &number);
if(number >0){
for(int i=1;i<=number;i++){
if(number%i == 0){
    if(isprime(i) == 1){
        largestprimefactor = i;
    }
}}
printf("largest prime factor of the number %d = %d",number,largestprimefactor); }
else{
    printf("enter a positive number");
}


return 0;}