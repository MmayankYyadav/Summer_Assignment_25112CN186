#include<bits/stdc++.h>
using namespace std;
void factorial(int number){
long long product = 1;
for(int i = 1 ; i<=number ;i++){
    product = product * i;}
cout<<"factorial of "<< number<< " is = "<<product;
}
int main(){
int number;
cout<<"enter number( till 20 ) = ";
cin>>number;
factorial(number);
return 0;
}

