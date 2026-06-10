#include<stdio.h>
int main(){
int number,x=0;
printf("enter number = ");
scanf("%d", &number);
printf("star pyramid \n");
for(int i=1;i<=number;i++){
for(int k=1;k<=number-i;k++){printf(" ");}
for(int j=65;j<=i+64;j++){printf("%c",j);}
for(int l=i+63;l>=65;l--){
if(i>1){printf("%c",l);}}
printf("\n");}
return 0;}