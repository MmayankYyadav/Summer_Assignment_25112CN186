#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string = ";
getline(cin , str) ;
int count = 0;
cout << "your string after removing spaces = ";
for( int i = 0 ; str[i] != '\0'; i++){
      if(str[i] != ' '){cout << str[i];};
  
}

return 0 ;
}