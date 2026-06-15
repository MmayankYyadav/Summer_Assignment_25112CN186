#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ,c = 0;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit],reversearray[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
int count= digit -1;
for( int i=digit-1;i>=0;i--){
if(array[i] != 0){
    c = array[i];
    array[i] = array[count];
    array[count] = c;
    count--;}}

cout <<"after swaping zero to the ends "<< endl;
for( int i=0;i<digit;i++){
    cout<< "number "<< (i+1) << " = ";
    cout << array[i]<< endl;}

return 0;
}
