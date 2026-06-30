#include<bits/stdc++.h>
using namespace std;
int main (){
     srand(static_cast<unsigned int>(std::time(0)));
     int secretnumber = rand()%100 + 1;
int att=0;
 cout<< "welcome to pridicting game "<< endl<<"================================================"<<endl<<
 "=======enter any number between 1 to 100======"<<endl;
 int number;
 do{
cout<<"====you have "<< 10 - att  <<" attempts ===="<< endl;
 cout<< "======= guess======"<<endl;
 cin>> number;
 if(secretnumber == number ){
    cout<< "====congratulation you got coorect guess at "<< att + 1<<" attempt  ====";
    break;
 }
else{if (secretnumber < number){
     cout<< "=======you should have guessed lower number======"<< endl;
     att++;
    if( att == 10){cout << "===== the number was "<< secretnumber << " ====="<<endl;
        cout<< "=======game over======"<<endl;}}
 else if (secretnumber > number){
     cout<< "=======you should have guessed higger number======"<<endl;
     att++;
    if( att == 10){cout << "===== the number was "<< secretnumber << " ====="<<endl;
        cout<< "=======game over======"<<endl;}}}
}
while(att < 10);
return 0;
}
