#include<bits/stdc++.h>
using namespace std;
int main(){
int digit, c = 0 ;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}

for( int i=0;i<digit-1;i++){
    int min = i;
for( int j=i+1;j< digit ;j++){
if(array[j] < array[min]){
    min = j;}}
      c= array[min];
      array[min] = array[i];
      array[i] = c;}

for(int l =0 ; l<digit ; l++){
    cout << array[l]<< "  ";
}
return 0;
}
