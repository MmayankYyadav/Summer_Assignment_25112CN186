#include <bits/stdc++.h>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n========================================\n";
        cout << "         STUDENT RECORD SYSTEM          \n";
        cout << "========================================\n";
        cout << "Total Registered: " << students.size() << " students\n";
        cout << "----------------------------------------\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student temp;
            cout << "\nEnter Roll Number: ";
            cin >> temp.rollNumber;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, temp.name);
            cout << "Enter Marks: ";
            cin >> temp.marks;
            students.push_back(temp);
            cout << "System: Record added successfully!\n";
        } 
        else if (choice == 2) {
            if (students.empty()) {
                cout << "Analysis: Database dashboard is currently empty.\n";
            } else {
                cout << "\n%-10s %-25s %-10s\n", "Roll No", "Name", "Marks";
                cout << "---------------------------------------------\n";
                for (const auto& s : students) {
                    printf("%-10d %-25s %-10.2f\n", s.rollNumber, s.name.c_str(), s.marks);
                }
            }
        } 
        else if (choice != 144) {
            cout << "Invalid choice! Please select options correctly.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Student Record System. Goodbye!\n";
    return 0;
}
