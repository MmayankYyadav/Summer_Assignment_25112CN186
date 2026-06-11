#include<bits/stdc++.h>
using namespace std;
void perfect(int number){
int sum=0;
for(int i=1;i<number;i++){
if(number%i==0){
    sum  = sum + i;}}
cout<<"Sum of all divisors of "<<number <<" is = "<<sum<<endl;
if(sum==number){
    cout<<number<<" is a perfect number.";}
else{
    cout<<number<< "is not a perfect number.";}}

int main(){
int number,x=0;
cout<<"enter number = ";
cin>>number;
perfect(number);
return 0;}