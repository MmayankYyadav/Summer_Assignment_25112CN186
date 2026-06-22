#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string to count number pf words = ";
getline(cin , str) ;
int count = 0;

for( int i = 0 ; str[i] != '\0'; i++){
      if(str[i] != ' ')  count++;
  
}
cout << count;
return 0 ;
}
