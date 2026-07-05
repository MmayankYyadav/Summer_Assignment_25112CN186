#include <bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n========================================\n";
        cout << "         MENU-DRIVEN CALCULATOR         \n";
        cout << "========================================\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: "; cin >> num1;
            cout << "Enter second number: "; cin >> num2;
        }

        if (choice == 1) {
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
        } 
        else if (choice == 2) {
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
        } 
        else if (choice == 3) {
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
        } 
        else if (choice == 4) {
            if (num2 == 0) {
                cout << "Error: Division by zero is undefined.\n";
            } else {
                cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
            }
        } 
        else if (choice != 144) {
            cout << "Invalid choice! Please select numbers from the menu.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Calculator safely. Goodbye!\n";
    return 0;
}
