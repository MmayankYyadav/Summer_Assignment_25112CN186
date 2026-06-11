#include<bits/stdc++.h>
using namespace std;
void palindrome(int number){
int originalnumber= number,reversedigit=0;

while(number != 0){
    int digitnumber = number%10;
    reversedigit = reversedigit * 10 + digitnumber;
    number= number/10;  }

if(reversedigit == originalnumber){
   cout<<("number is palindrome");
   }
else{  cout<<("number is not palindrome");}
}

int main(){
int number;
cout<<"enter number = ";
cin>>number;
palindrome(number);

return 0;}

