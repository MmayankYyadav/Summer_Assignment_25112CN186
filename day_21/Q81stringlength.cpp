#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string to count its length = ";
cin >> str ;
int count = 0;
for( int i = 0 ; str[i] != '\0'; i++){
    count ++;
}
cout<< "the string length is = " << count;
    return 0 ;
}