#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string tocheck palindrome  = ";
cin >> str ;
int count = 0;

for( int i = 0 ; i < str.length(); i++){
    if((str[str.length() - i - 1]) != str[i]){
        count++;
    break ;}
}
if(count > 0){cout << "not palindrome";}
else{cout << "your string is palindrome";}
return 0 ;
}
