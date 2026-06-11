#include<bits/stdc++.h>
using namespace std;
void maximum(double a,double b){
    if(a==b){cout<<"Not applicable";}
    else{if(a>b){cout<<a<<" is greater than "<<b;}
    else{cout<<b<<(" is greater than ")<<a;}
}}
int main(){
double a,b;
cout<< "enter first numbers =";
cin >> a;
cout<< ("enter two numbers =");
cin >> b;
maximum(a,b);
return 0;
}