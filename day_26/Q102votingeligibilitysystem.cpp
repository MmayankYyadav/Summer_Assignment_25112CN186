#include<bits/stdc++.h>
using namespace std;
int main (){
 cout<< "welcome to  voting eligibility system "<< endl<<"================================================"<<endl<<
 "=======enter your age======"<<endl;
 int age;
 cin>> age;
 if(age >= 18 ){
    cout<< "====congratulation you can vote==== ";}
else {
     cout<< "=======you have to wait for "<< 18 - age<<" years to vote.======"<< endl;
     }

return 0;
}
