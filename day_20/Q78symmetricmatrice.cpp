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
cout<<"enter numbers of matrices"<< endl ;
for( int i=0;i < r1;i++){
for( int j=0;j < c1;j++){
cin >>  array[i][j];}}
// cout<<"matrices = "<< endl;
// for( int i=0;i < r1;i++){  //for( int j=0;j < c1;j++){  // cout <<  array[i][j];}   // << "\n";}

int count = 0;
int tranpose[c1][r1];
for( int i=0;i < c1;i++){
    for( int j=0;j < r1;j++){
       tranpose[i][j] =  array[j][i];}}

if(r1 == c1){
for( int i=0;i < r1;i++){
for( int j=0;j < c1;j++){
      if( tranpose[i][j] !=  array[i][j]){
       count ++ ;
    break ;}}if(count > 0) break;}

if(count > 0){cout << "not symmetric";}
else{cout << "yes matrice is symmetric";}}
else{cout << "not applicable";}
return 0;}