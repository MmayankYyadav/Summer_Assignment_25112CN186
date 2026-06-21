#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string to count its length = ";
cin >> str ;
int count = 0;
for( int i = 0 ; i < str.length(); i++){
    if(str[i]>='a' && str[i]<= 'z'){cout << char(str[i] - 32);}
    else{ cout << str[i];}
}
return 0 ;
}