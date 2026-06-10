#include<stdio.h>
int main(){
int number,x=0;
printf("enter number = ");
scanf("%d", &number);
printf("star pyramid \n");
for(int i=1;i<=number;i++){
for( int k=1;k<=number-i;k++){printf(" ");}
for(int j=1;j<=i;j++){printf("%d",j);}
for(int l=i-1;l>=1;l--){
if(i>1){ printf("%d",l);}}
printf("\n");}
return 0;}