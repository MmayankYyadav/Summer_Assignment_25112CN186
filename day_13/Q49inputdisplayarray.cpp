#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit];
cout<<"enter number sigle digit at a  time "<< endl ;
for( int i=0;i<digit;i++){
cout<<"digit "<< i+1<<"=";
cin >>  array[i];}
cout<<"number = ";
for( int i=0;i<digit;i++){
cout << array[i];}
return 0;
}
