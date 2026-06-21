#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string to reverse it = ";
cin >> str ;
int count = 0;
cout << "reversed string is";
for( int i = 0 ; i <= str.length(); i++){
    cout << str[str.length() - i];
}
return 0 ;
}