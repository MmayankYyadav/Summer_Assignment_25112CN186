#include<bits/stdc++.h>
using namespace std;
void prime(int number){
    int x=0;
for(int i=2;i<number;i++){
if(number%i == 0){
  x=x+1;
break; }
}
if(x==0){
    cout<<"number is prime number";
}
else{cout<<"number is not prime number";}
}

int main(){
int number,x=0;
cout<<"enter number = ";
scanf("%d", &number);
prime(number);

return 0;}