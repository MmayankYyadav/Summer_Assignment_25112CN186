#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
string temp;
vector <pair<string,int>> word;
cout << "enter you string to count length = ";
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
pair<string, int> pair_temp; 

for( int i = 0 ; i < word.size(); i++){
for( int j = 0 ; j < word.size(); j++){
if(word[i].first < word[j].first){
   pair_temp = word[i];
   word[i] = word[j];
   word[j] = pair_temp;
}
}}

cout << "sorted word alphabetically = ";
for( int l = 0 ; l < word.size(); l++){
    cout << word[l].first<< "    ";}
return 0 ;
}
