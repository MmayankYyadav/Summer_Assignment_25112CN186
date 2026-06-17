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
int digit1,digit2, count = 0;
cout<<"print digit of number you will be entering = ";
cin >> digit1;

int array1[digit1];
for( int i=0;i< digit1;i++){
cout<<"number "<< i+1<<"=";
cin >> array1[i];}

cout<<"print digit of number you will be entering in second array= ";
cin >> digit2;
int array2[digit2];
for( int i=0;i< digit2;i++){
cout<<"number "<< i+1<<"=";
cin >> array2[i];}
int mergedarray[digit1 + digit2];    
for (int i = 0; i <  digit1; i++) {
for (int j = 0; j < digit2; j++) {
        if( array1[i] == array2[j]){
        mergedarray[count] = array1[i];
     count++;
   }
    }}
    
int size = removeduplicate(mergedarray ,count);
cout<<"intersection of array is "<< endl ;

for( int l=0; l<size;l++){
cout << mergedarray[l]<< "   ";}
return 0;
}