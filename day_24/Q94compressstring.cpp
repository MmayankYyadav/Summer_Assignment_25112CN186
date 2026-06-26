#include<bits/stdc++.h>
using namespace std;
int main(){
int n1;
string str;
cout << "enter number of character you will be entering  = ";
cin >> n1 ;
cout << "enter you string = ";
cin >> str ;
int count = 1;
char prev = 0;
cout << "compressed string = ";
for(int i=1 ; i<=n1;i++){ 
if(i < n1  && str[i-1] == str[i]){count ++ ;
    }
else{
    if(count > 1 ){cout << str[i-1]<< count;}
    // cout<< str[i];
    else{cout << str[i-1];}
    count = 1;}
}
return 0 ;
}
