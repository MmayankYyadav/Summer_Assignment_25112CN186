#include<stdio.h>
#include<math.h>
int main (){
    int binary,x=0,sum=0;
    printf("enter binary number=");
    scanf("%d",&binary);


while(binary != 0){
sum = sum + (binary%10)*(pow(2,x));
    binary = binary/10; 
    x++;
}
 printf("decimal number = %d", sum);
     return 0;
}