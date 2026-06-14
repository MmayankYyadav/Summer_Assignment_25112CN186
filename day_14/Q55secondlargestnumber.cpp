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
int max=INT_MIN,second=INT_MIN;
for( int i=0;i<digit;i++){
if(array[i]>max){
  second = max;
  max = array[i];}
else if(array[i]<max && array[i]>second){
  second = array[i];}
}
if(second == INT_MIN){cout<<"no different number";}
else{cout<<"MAXIMUM NUMBER = "<< max<< endl;
cout<<"SECOND MAXIMUM NUMBER = "<< second;}
return 0;
}
