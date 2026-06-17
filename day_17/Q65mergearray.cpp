#include<bits/stdc++.h>
using namespace std;
int main(){
int digit1,digit2 ;
cout<<"print digit of number you will be entering = ";
cin >> digit1;

int array1[digit1];
for( int i=0;i< digit1;i++){
cout<<"number "<< i+1<<"=";
cin >> array1[i];}

cout<<"print digit of number you will be entering in second array= ";
cin >> digit2;
int array2[digit2];
for( int i=0;i< digit2;i++){
cout<<"number "<< i+1<<"=";
cin >> array2[i];}
int mergedarray[digit1 + digit2];
for (int i = 0; i < digit1; i++) {
    mergedarray[i] = array1[i];
}
for (int i = 0; i < digit2; i++) {
    mergedarray[digit1 + i] = array2[i];
}

cout<<"merged array is "<< endl ;
for( int i=0;i<(digit1 + digit2 );i++){
    cout<< "number "<< (i+1) << " = ";
cout << mergedarray[i]<< endl;}

return 0;
}
