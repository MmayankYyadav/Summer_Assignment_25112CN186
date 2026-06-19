#include<bits/stdc++.h>
using namespace std;
int main(){
int r1,c1 ;
cout<<"enter order of matrices"<< endl;
cout<< "r1 = ";
cin >> r1 ;
cout<<"c1 = ";
cin >>c1;

int array[r1][c1];
cout<<"enter number at a  time "<< endl ;
for( int i=0;i < r1;i++){
for( int j=0;j < c1;j++){
cin >>  array[i][j];}}
cout<<"matrices = "<< endl;

for( int i=0;i < r1;i++){ 
for( int j=0;j < c1;j++){ 
        cout <<  array[i][j]<<"\t";} 
        cout << "\n";}
int diagonalsum = 0;
if(c1 == r1 ){
for( int i=0;i < r1;i++){
for( int j=0;j < c1;j++){if(i == j){diagonalsum += array[i][j];}}}

cout << "sum of diagonal elements = "<<diagonalsum <<endl; }
else{cout<<"sum can not be found";}
return 0;}