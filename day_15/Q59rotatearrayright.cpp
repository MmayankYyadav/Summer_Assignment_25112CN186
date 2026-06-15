#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ,numbersearch ,rotate;
cout<<"print digit of number you will be entering = ";
cin >> digit;
cout<<"enter digit by which you want to rotate =";
cin>> rotate;
int array[digit],reversearray[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
int count=0;
for( int i=0;i<digit;i++){
reversearray[(i + rotate + digit)% digit] = array[i];}


cout << "array after rotatation by "<< rotate << endl;
for( int i=0;i<digit;i++){
    cout<< "number "<< (i+1) << " = ";
cout << reversearray[i]<< endl;}

return 0;}