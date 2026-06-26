#include<bits/stdc++.h>
using namespace std;
int main(){
int n1, n2;
string str, str2;
cout << "enter number of character you will be entering (for string 1) = ";
cin >> n1 ;
cout << "enter you 1st string = ";
cin >> str ;
cout << "enter number of character you will be entering (for string 2) = ";
cin >> n2 ;
cout << "enter you 2nd string = ";
string strnew = (str + str );
cin >> str2 ;
bool check = false ;
if(n1 == n2){
for(int i=0 ;i<n1;i++){
    if(strnew.substr(i,n1) == str2){
        cout << "your string has rotation" ;
        check = true ;
    break ;}}
    if(check == false){cout <<"Are not rotation of each other";}
}

else{ cout << "your string is not applicable";}

return 0;
}
