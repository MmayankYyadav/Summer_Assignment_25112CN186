#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
int max=INT_MIN,min=INT_FAST8_MAX;
for( int i=0;i<digit;i++){
if(array[i]>=max){
max = array[i];}}

for( int i=0;i<digit;i++){
if(array[i]<=min){
min = array[i];}}

cout<<"MAXIMUM NUMBER = "<< max<< endl;
cout<<"MINIMUM NUMBER = "<< min;
return 0;
}
