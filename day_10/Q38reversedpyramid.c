#include<stdio.h>
int main(){
int number,x=0;
printf("enter number = ");
scanf("%d", &number);
printf("reverse star pyramid =\n");
for(int i=1;i<=number;i++){
if(i != 1){for(int k=1;k<=i-1;k++){printf("  ");}}
for(int j=1 ;j<=number-i+1;j++){printf("* ");}
for(int l=1 ;l<=number-i;l++){ printf("* ");}
printf("\n");}
return 0;}

