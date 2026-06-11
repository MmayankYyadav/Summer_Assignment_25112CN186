#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
if(n == 0 || n == 1){
 return n;}
 else{return fibonacci(n-1) + fibonacci(n-2);}
}

int main(){
int number, x;
cout<<"enter  terms number you want = ";
cin>> number;
cout<<"fibonacci term is = ";


x = fibonacci(number-1);
cout<< x;
return 0;}
