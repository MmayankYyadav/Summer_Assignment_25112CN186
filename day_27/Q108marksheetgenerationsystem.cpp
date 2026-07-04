#include<bits/stdc++.h>
using namespace std;

struct student {
    int id;
    string name;
    int classes;
    float percentage;
    int maths ;
     int science ;
     int sst ;
     int hindi ;
     int english ;
};

int main(){
    vector<student> studentlist;
    int choice,basesalary,hra,pf;
    srand(static_cast<float>(std::time(0)));
 do {
        student tempEmp; 

        cout << "\n--- Enter student Details ---\n";
        cout << "Enter Student ID: ";
        cin >> tempEmp.id;
        
        cin.ignore(); 
        
        cout << "Enter Name: ";
        getline(cin ,tempEmp.name);
        
        cout << "Enter Class: ";
        cin >> tempEmp.classes;

    tempEmp.maths = rand() %100 + 1;
    tempEmp.science = rand() %100 + 1;
    tempEmp.sst = rand() %100 + 1;
    tempEmp.hindi = rand( ) %100 + 1;
    tempEmp.english = rand() %100 + 1;
  
tempEmp.percentage = (tempEmp.maths + tempEmp.sst + tempEmp.science + tempEmp.hindi + tempEmp.english)/5.0;



        studentlist.push_back(tempEmp);

        cout << "Enter 144 to EXIT, or any other number to add another employee: ";
        cin >> choice;

    } while (choice != 144);



    cout << "\n========================================\n";
    cout << "          Student Marksheet         \n";
    cout << "========================================\n";
    
    for (int i = 0; i < studentlist.size(); i++) {
        cout << "ID: " << studentlist[i].id 
             << " | Name: " << studentlist[i].name 
             << " | Class: " << studentlist[i].classes << endl
    << " | maths: " <<studentlist[i].maths 
    << " | science: " <<studentlist[i].science 
    << " | sst: " <<studentlist[i].sst 
    << " | hindi: " <<studentlist[i].hindi 
    << " | english: " <<studentlist[i].english 
             << " | Percentage: " << studentlist[i].percentage << endl;
    }
return 0 ;
}