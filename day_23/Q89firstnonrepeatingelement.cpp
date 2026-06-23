#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string to count frequency = ";
getline(cin , str) ;
int count;

for( int i = 0 ; i < str.length(); i++){count = 0;
    for( int j = 0 ; j < str.length(); j++){
      if(str[i] == str[j])  count++;}
if(count == 1){ cout << "the first non repeating character is '"<< str[i]<<"'" << endl;
break ;}}
return 0 ;
}
