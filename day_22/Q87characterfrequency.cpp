#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string to count frequency = ";
getline(cin , str) ;
int count;

for( char ch = 'A' ; ch <= 'z'; ch++){count = 0;
    for( int j = 0 ; j < str.length(); j++){
      if(ch == str[j])  count++;}
if(count > 0){ cout << "the frequency of "<< ch <<" is "<< count<< endl;}}
return 0 ;
}
