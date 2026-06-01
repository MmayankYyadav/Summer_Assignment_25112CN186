#include<stdio.h>
int main(){
printf("enter number N =");
int N;
int sum =0;
scanf("%d",&N);
for(int i =1 ; i<=N ;i++){
    sum += i;
}
printf("sum of %d(N) natural number is %d",N,sum);
return 0;}