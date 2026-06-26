#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
vector <pair<char , int >> freq;
cout << "enter you string to count frequency = ";
cin >> str ;
bool check = false;
int count,maxcount=0;
    for(int i = 0 ; i < str.length(); i++){
        if(str[i] == ' ') continue; 
        
        count = 0;
        check = false;
        
        for(int k = 0; k < i; k++) {
            if(str[i] == str[k]) {       
                check = true; 
                break;                   
            }
        }
        
        if(check == false){ 
            for(int j = 0 ; j < str.length(); j++){
                if(str[i] == str[j]) count++;
            }
            if(count > 0){ 
                freq.push_back(make_pair(str[i] , count));
            }
        }
        
        if(maxcount < count){
            maxcount = count;
        }
    }
for( int i = 0 ; i < freq.size(); i++){
if(freq[i].second == maxcount){
cout << "maximum character in word is ' "<< freq[i].first<< "' and frequency is "<< freq[i].second<<endl;
}}
return 0 ;
}