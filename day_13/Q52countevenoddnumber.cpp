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
int countodd=0,counteven=0;
for( int i=0;i<digit;i++){
if((array[i]) % 2 == 0 && array[i]>0){counteven ++;}
else if((array[i])%2 != 0){countodd++;}
}

cout<<"even number = "<<counteven<<endl<<"odd number = "<< countodd;
return 0;
}
