#include<bits/stdc++.h>
using namespace std;
void merge(string &str, int low , int mid , int high){
    vector<char> temp;
int left = low;
int right = mid + 1;
while(left <= mid && right <= high ){
    if(str[left] <=  str[right]){
        temp.push_back(str[left]);
        left++;
    }
    else{temp.push_back(str[right]);
     right++;}}
     while(left<=mid){
        temp.push_back(str[left]);;
    left++;}
    while(right<= high){
        temp.push_back(str[right]);
        right++;
    }
    for(int i = low ; i<= high ; i++){
        str[i] = temp[i - low];
    }
}
void ms(string &str , int low ,int high){
    if(high == low){return ;}
   int mid = (low + high )/2;
   ms( str ,  low , mid);
   ms( str ,  mid + 1 , high);
   merge(str,  low ,  mid ,  high);
}
int main(){
int n1;
string str;
cout << "enter number of character you will be entering  = ";
cin >> n1 ;
cout << "enter you string = ";
cin >> str ;
ms( str , 0, n1 - 1);
char prev = 0;
for(int i=1 ; i<n1;i++){  
if(str[prev] < str[i]){cout << str[prev];
     prev = i;}
}
return 0 ;
}
