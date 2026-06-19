#include<bits/stdc++.h>
using namespace std;
int main(){
int digit, c = 0 ;
cout<<"print digit of number you will be entering = ";
cin >> digit;

int array[digit];
for( int i=0;i<digit;i++){
cout<<"number "<< i+1<<"=";
cin >>  array[i];}

    int low = 0 ,high = digit -1,search;
    cout<< "enter number you want to search = ";
    cin>> search;
    int mid;
bool found = false ;
while(low <= high){
    mid = low + (high - low)/2;
    if(array[mid] == search){
        found = true ;
        cout << "your number has been found at the index "<< mid + 1;
        break;
    }
else if(search > array[mid]){
    low = mid +1;
}
else if(search < array[mid]){
    high = mid - 1;
}}
if(found == false){cout<< "not found";}
return 0;
}
