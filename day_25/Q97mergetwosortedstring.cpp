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
string str, str2;
cout << "enter you 1st string = ";
cin >> str ;
cout << "enter you 2nd string = ";
cin >> str2 ;
 string stradd = str + str2;
  ms( stradd ,0, str2.length()+ str.length() - 1);
cout << stradd;
return 0 ;
}

