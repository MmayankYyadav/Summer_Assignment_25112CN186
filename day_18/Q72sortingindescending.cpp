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
int max=INT_MIN,c = 0;
for( int i=0;i<digit-1;i++){
    for( int j=1;j< digit - i;j++){
if(array[j-1] < array[j]){
c= array[j];
array[j] = array[j-1];
array[j-1] = c;
}}}

for(int l =0 ; l<digit ; l++){
    cout << array[l]<< "  ";
}

return 0;
}
