#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ,numbersearch;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit],reversearray[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
int count=0;
for( int i=0;i<digit;i++){
reversearray[digit-i-1] = array[i];
}
for( int i=0;i<digit;i++){
    cout<< "number "<< (i+1) << " = ";
cout << reversearray[i]<< endl;}

return 0;
}
