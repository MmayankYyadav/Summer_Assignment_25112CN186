#include<bits/stdc++.h>
using namespace std;
int main (){
     srand(static_cast<unsigned int>(std::time(0)));
     int bankbalance = rand()%10000 + 500;
int att=0;
 cout<<"================================================"<<endl<< "          welcome to yagami bank "<<
  endl<<"================================================"<<endl;
 cout<<"press 1 for knowing bank balance"<<endl ;
 cout<<"press 2 for withdraw amount"<<endl ;
 cout<<"press 3 for deposit amount"<<endl ;
 cout<<"press 4 to exit"<<endl ;
 int choice,withdraw,deposite;

 do{
    cout << "please enter what you want !!"<<endl;
     cin>> choice;
if(choice == 1){
    cout << "your bank balance is "<<bankbalance<<" !! " <<endl;}
else if(choice == 2){
    cout << "enter amount which you want to withdraw = ";
    cin>> withdraw;
    if(bankbalance >= withdraw){bankbalance -= withdraw;
    cout << "your amount has been withdrawed"<<endl;}
    else{cout << "your balance is not enough for withdrawal"<<endl;}}
else if(choice == 3){
   cout << "enter amount which you want to deposite = ";
   cin>> deposite;
   bankbalance += deposite;
   cout << "your amount has been deposited"<<endl;}
else if(choice == 4){
   cout << "thank you !! "<< endl<<"please come again !! ";
break;}
 }
while(choice != 4);
return 0;
}
