#include<bits/stdc++.h>
using namespace std;
int main(){
int digit ,numbersearch;
cout<<"print digit of number you will be entering = ";
cin >> digit;
cout<<"enter number you want to search = ";
cin>> numbersearch ;

int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}
int count=0;
for( int i=0;i<digit;i++){
if((array[i]) == numbersearch){count++; 
break ;}
}
if(count == 1){
    cout<<"your number occur ";
}
else{cout<<"it does not occur";}
return 0;
}
