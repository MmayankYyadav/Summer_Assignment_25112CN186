#include<bits/stdc++.h>
using namespace std;
int main(){
string str1, str2;
cout << "enter you 1st string = ";
cin >> str1 ;
cout << "enter you 2nd string = ";
cin >> str2 ;
int count1 ,count2;
int final[255] = {0};
for(char ck ='a'; ck <='z'; ck++){
    count1 = 0;
    count2 = 0;
for(int i = 0; i< str1.length() ;i++){
      if(str1[i] == ck){
            count1++;
        }}
for(int j = 0; j< str2.length() ;j++){
   if(str2[j] == ck){
            count2++;
        }}
if(count1 > 0 && count2 > 0){
    final[ck] = count1 + count2;
cout << "the common character '"<<ck<<"' occur "<< count1<<" times in string 1 and "<< count2<<" times in string 2. "<< endl;}
    }

return 0 ;
}