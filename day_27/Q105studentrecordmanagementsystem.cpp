#include<bits/stdc++.h>
using namespace std;

struct studentdetails{
string name ;
int rollno ;
int admissionno ;
float cgpa;
};

int main(){
    vector<studentdetails> details;
int choice;
do {
        studentdetails tempStudent;

        cout << "\n--- Enter Student Details ---\n";
        cout << "Enter Name: ";
        cin >> tempStudent.name;
        cout << "Enter Roll No: ";
        cin >> tempStudent.rollno;
        cout << "Enter Admission No: ";
        cin >> tempStudent.admissionno;
        cout << "Enter CGPA: ";
        cin >> tempStudent.cgpa;

        details.push_back(tempStudent);

        cout << "Enter 144 to EXIT, or any other number to add another student: ";
        cin >> choice;

    } while (choice != 144);



    cout << "\n========================================\n";
    cout << "          ALL STORED STUDENTS           \n";
    cout << "========================================\n";
    
    for (int i = 0; i < details.size(); i++) {
        cout << "Name: " << details[i].name 
             << " | Roll: " << details[i].rollno 
             << " | Admin No: " << details[i].admissionno 
             << " | CGPA: " << details[i].cgpa << endl;
    }
return 0 ;
}