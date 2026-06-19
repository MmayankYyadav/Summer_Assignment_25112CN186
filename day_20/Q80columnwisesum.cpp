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
// cout << "transpose "<< endl;
// for( int i=0;i < c1;i++){  // for( int j=0;j < r1;j++){
// cout <<  array[j][i];}   //cout << "\n";}
int columnsum = 0;
for( int i=0;i < c1;i++){columnsum = 0 ;
    for( int j=0;j < r1;j++){
    {columnsum += array[j][i];}}
cout << "sum of column "<<i+1<< " = "<< columnsum << endl;}
return 0;}