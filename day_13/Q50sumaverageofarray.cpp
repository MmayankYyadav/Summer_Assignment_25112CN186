#include<bits/stdc++.h>
using namespace std;
int main(){
int digit;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit];
cout<<"enter numbers = ";
for( int i=0;i<digit;i++){
cin >>  array[i];}
float sum = 0 ;
for( int i=0;i<digit;i++){
sum = sum + array[i];}
cout <<"sum = "<< sum<< endl ;
cout << "average = "<<sum/digit ;
return 0;
}
