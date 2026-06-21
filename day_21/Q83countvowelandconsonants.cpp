#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout << "enter you string to count vowel and consonants = ";
cin >> str ;
int count = 0 , count2 = 0;
for( int i = 0 ; i < str.length(); i++){
if( str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o'||str[i] =='u'||
    str[i] == 'A' || str[i] =='E' || str[i] =='I' || str[i] =='O'||str[i] =='U'){count ++ ;}
    else{ count2 ++ ;}
}
cout << "vowel are " <<count << " consonants are "<< count2 ;
return 0 ;
}