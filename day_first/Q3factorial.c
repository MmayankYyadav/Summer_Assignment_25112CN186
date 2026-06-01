#include<stdio.h>
int main(){
printf("enter number n =");
int n;
int product = 1;
scanf("%d",&n);
for(int i =1 ; i<=n ;i++){
    product = product * i;
}
printf("factorial of %d (n)  is = %d",n,product);
return 0;
}