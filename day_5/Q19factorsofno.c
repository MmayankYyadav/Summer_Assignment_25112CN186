#include<stdio.h>
int main(){
int number,x=0;
printf("enter number = ");
scanf("%d", &number);
if(number >0){
printf("factors are = ");
for(int i=1;i<=number;i++){
if(number%i == 0){
  printf("%d ",i); }
}}
else{
    printf("enter a positive number");
}


return 0;}