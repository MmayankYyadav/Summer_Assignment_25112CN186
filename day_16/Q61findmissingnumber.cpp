#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ,sum = 0;
cout<<"print digit of number you will be entering = ";
cin >> digit;
int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
int count=0;
for( int i=0;i<digit;i++){
sum = sum + array[i];
}

cout<<"missing number from 1 to "<< digit<<" is = "<< (((digit*(digit+1))/2 - sum));
return 0;
}