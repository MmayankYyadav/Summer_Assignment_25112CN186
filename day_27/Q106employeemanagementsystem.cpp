#include<bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    int salary;
};

int main(){
    vector<Employee> employeelist;
int choice;
 do {
        Employee tempEmp; 

        cout << "\n--- Enter Employee Details ---\n";
        cout << "Enter Employee ID: ";
        cin >> tempEmp.id;
        
        cout << "Enter Name: ";
        cin >> tempEmp.name;
        
        cout << "Enter Department (e.g., IT, HR, Sales): ";
        cin >> tempEmp.department;

        employeelist.push_back(tempEmp);

        cout << "Enter 144 to EXIT, or any other number to add another employee: ";
        cin >> choice;

    } while (choice != 144);



    cout << "\n========================================\n";
    cout << "          ALL STORED EMPLOYEE           \n";
    cout << "========================================\n";
    
    for (int i = 0; i < employeelist.size(); i++) {
        cout << "ID: " << employeelist[i].id 
             << " | Name: " << employeelist[i].name 
             << " | Dept: " << employeelist[i].department << endl;
    }
return 0 ;
}