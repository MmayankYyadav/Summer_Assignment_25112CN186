#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
string temp;
vector <pair<string,int>> word;
cout << "enter you string  = ";
getline(cin , str) ;
int count = 0,count1=0;
for( int i = 0 ; i < str.length(); i++){
if(str[i] != ' '){count++;
       temp += str[i];}
if (str[i] == ' ' || i == str.length() - 1) {
            if (count > 0) { // Only print if we actually have a word stored
              //   cout << temp << "    " << count << endl;
              word.push_back(make_pair(temp , count));
                count = 0;   // Reset counter
                temp = "";   // Reset string
            }

}}
int maxcount = 0 , index = 0;
for( int i = 0 ; i < word.size(); i++){
if(word[i].second > maxcount){
       maxcount = word[i].second ;
       index = i ;
}}

cout << "Sort words by length =";
for(int len = 1; len<= word[index].second; len++){
for( int i = 0 ; i < word.size(); i++){
if(word[i].second == len){
    cout << word[i].first<< "    ";
}
}}

return 0 ;
}
