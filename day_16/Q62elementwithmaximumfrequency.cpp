#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ,numbersearch;
cout<<"print digit of number you will be entering = ";
cin >> digit;
int array[digit],count[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
for( int i=0;i<digit;i++){
    count[i] = 0;
for( int j=0;j<digit;j++){
if((array[j]) == array[i]){count[i]++;}}
}
int maxindex =0;
int max=INT_MIN,min=INT_FAST8_MAX;
for( int i=0;i<digit;i++){
if(count[i] >= max){
max = count[i];
maxindex = i;}}
cout << "the number "<< array[maxindex] <<" is occuring "<< max <<" times, at last occured at index "<< maxindex;

return 0;
}