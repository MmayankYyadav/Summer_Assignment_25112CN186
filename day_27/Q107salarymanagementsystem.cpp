#include<bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    int finalNetSalary;
};

int main(){
    vector<Employee> employeelist;
int choice,basesalary,hra,pf;
 do {
        Employee tempEmp; 

        cout << "\n--- Enter Employee Details ---\n";
        cout << "Enter Employee ID: ";
        cin >> tempEmp.id;
        
        cin.ignore(); 
        
        cout << "Enter Name: ";
        getline(cin ,tempEmp.name);
        
        cout << "Enter Department (e.g., IT, HR, Sales): ";
        cin >> tempEmp.department;

        if(tempEmp.department[0] == 'i'  || tempEmp.department[0] =='I'){basesalary = 800000;}
       else if(tempEmp.department[0] == 'h' || tempEmp.department[0] =='H'){basesalary = 600000;}
        else if(tempEmp.department[0] == 's' || tempEmp.department[0] =='S'){ basesalary = 400000;}


{
 hra = basesalary * 0.20;
 pf = basesalary * 0.12;  
tempEmp.finalNetSalary = basesalary + hra - pf;}



        employeelist.push_back(tempEmp);

        cout << "Enter 144 to EXIT, or any other number to add another employee: ";
        cin >> choice;

    } while (choice != 144);



    cout << "\n========================================\n";
    cout << "          ALL STORED SALARY SYSTEM           \n";
    cout << "========================================\n";
    
    for (int i = 0; i < employeelist.size(); i++) {
        cout << "ID: " << employeelist[i].id 
             << " | Name: " << employeelist[i].name 
             << " | Dept: " << employeelist[i].department 
             << " | salary: " << employeelist[i].finalNetSalary << endl;
    }
return 0 ;
}