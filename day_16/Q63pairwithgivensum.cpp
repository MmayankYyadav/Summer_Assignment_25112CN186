#include<bits/stdc++.h>
using namespace std;
int main(){
int digit,count=0 ;
cout<<"print digit of number you will be entering = ";
cin >> digit;
int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
int sum;
cout << "enter number for which you want to find pair of two number equal to it = ";
cin >> sum;
for( int i=0;i<digit;i++){
    for( int j=i+1;j<digit;j++){
if( (array[i] + array[j]) == sum){count++;
    cout<< array[i]<<" + "<<array[j]<<" = "<<sum<<endl;}                                
}}
if(count <= 0){cout<<"no pair is found";}
return 0;
}