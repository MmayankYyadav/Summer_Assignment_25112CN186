#include <bits/stdc++.h>
using namespace std;

struct Employee {
    int empId;
    string name;
    string department;
    double salary;
};

int main() {
    vector<Employee> company;
    int choice;

    do {
        cout << "\n========================================\n";
        cout << "       EMPLOYEE MANAGEMENT SYSTEM       \n";
        cout << "========================================\n";
        cout << "Active Staff: " << company.size() << " personnel\n";
        cout << "----------------------------------------\n";
        cout << "1. Add Employee Profile\n";
        cout << "2. Display All Profiles\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Employee temp;
            cout << "\nEnter Employee ID: ";
            cin >> temp.empId;
            cin.ignore();
            cout << "Enter Full Name: ";
            getline(cin, temp.name);
            cout << "Enter Assigned Department: ";
            getline(cin, temp.department);
            cout << "Enter Monthly Salary: ";
            cin >> temp.salary;
            company.push_back(temp);
            cout << "System: Employee profile registered successfully!\n";
        } 
        else if (choice == 2) {
            if (company.empty()) {
                cout << "Analysis: Management database dashboard is currently empty.\n";
            } else {
                cout << "\n%-10s %-20s %-18s %-12s\n", "Emp ID", "Name", "Department", "Salary";
                cout << "----------------------------------------------------------------\n";
                for (const auto& e : company) {
                    printf("%-10d %-20s %-18s %-12.2f\n", e.empId, e.name.c_str(), e.department.c_str(), e.salary);
                }
            }
        } 
        else if (choice != 144) {
            cout << "Invalid choice! Please select options correctly.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Employee Management System. Goodbye!\n";
    return 0;
}
