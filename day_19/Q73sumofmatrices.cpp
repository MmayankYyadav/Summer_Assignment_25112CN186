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

// for( int i=0;i < r1;i++){// for( int j=0;j < c1;j++){// cout <<  array[i][j];}// cout << "\n";}
int r2,c2 ;
cout<<"enter order of matrices"<< endl;
cout<< "r2 = ";
cin >> r2 ;
cout<<"c2 = ";
cin >>c2;

int array2[r2][c2];
cout<<"enter number at a  time "<< endl ;
for( int i=0;i < r2;i++){
for( int j=0;j < c2;j++){
cin >>  array2[i][j];}}
cout<<"matrices = "<< endl;
// for( int i=0;i < r2;i++){// for( int j=0;j < c2;j++){// cout <<  array2[i][j];}// cout << "\n";}

cout << "sum of matrice 1 and matrice 2 ="<<endl;
if(c1 == c2 && r1 == r2){
for( int i=0;i < r1;i++){
for( int j=0;j < c1;j++){
cout <<  array2[i][j] + array[i][j] << "\t";}
cout << "\n";}}
else{cout<<"sum can not be found";}
return 0;}