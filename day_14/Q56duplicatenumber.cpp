#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"= ";
cin >>  array[i];}
for( int i=0;i<digit;i++){
for( int j=0;j<i;j++){
if(array[i] == array[j]){
 cout<<"duplicate is found  = "<< array[i]<< endl;
break ;}
}}

return 0;
}
