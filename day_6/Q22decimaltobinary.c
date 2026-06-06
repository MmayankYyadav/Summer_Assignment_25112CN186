#include<stdio.h>
int main (){
    int number2,rem,number;
    printf("enter a decimal number = ");
    scanf("%d", &number);
    number2 = number;
    int binary[32];
    int decimal=0,x=0,powr=1;
    while(number2 > 0){
        binary[x] = number2%2;
        number2 = number2/2;
       x++;

    }
    for(int j=x-1;j>=0;j--){
    printf("%d", binary[j]);}
    return 0;
}
