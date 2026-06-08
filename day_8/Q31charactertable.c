#include<stdio.h>
int main(){
int number,x=0;
printf("enter number = ");
scanf("%d", &number);
for(int i=65;i<=64+number;i++){
for(int j=65 ;j<=i;j++){
    printf("%c",j);}
printf("\n");
}
return 0;}