#include<bits/stdc++.h>
using namespace std;
int removeduplicate(int array[], int size){
for( int i=0;i<size;i++){
for( int j=i+1;j<size;j++){
 if( array[i] == array[j]){
              for( int k=j;k<size;k++){
                array[k] = array[k+1];}
              size--;
              j--; }}}
return size;}
int main(){
int digit,size;
cout<<"print digit of number you will be entering = ";
cin >> digit;
size = digit ;
int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"= ";
cin >>  array[i];}
size = removeduplicate(array ,size );
cout<<" Array after removing duplicate value = "<< endl;
for( int i = 0 ; i<size ; i++){
    cout<< array[i]<<"   ";}
return 0;
}