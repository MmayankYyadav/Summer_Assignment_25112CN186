#include <bits/stdc++.h>
using namespace std;

int main() {
    string baseString = "Hello C++";
    int choice;

    do {
        cout << "\n========================================\n";
        cout << "        STRING OPERATIONS SYSTEM        \n";
        cout << "========================================\n";
        cout << "Current String: \"" << baseString << "\"\n";
        cout << "----------------------------------------\n";
        cout << "1. Input New Master String\n";
        cout << "2. Append / Concatenate String\n";
        cout << "3. Find String Length\n";
        cout << "4. Reverse the String\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cin.ignore();
            cout << "\nEnter new string: ";
            getline(cin, baseString);
            cout << "System: String updated successfully!\n";
        } 
        else if (choice == 2) {
            cin.ignore();
            string appendStr;
            cout << "\nEnter text to append: ";
            getline(cin, appendStr);
            baseString += appendStr;
            cout << "System: Strings combined successfully!\n";
        } 
        else if (choice == 3) {
            cout << "Analysis: Total Character Length is " << baseString.length() << " units.\n";
        } 
        else if (choice == 4) {
            string revStr = baseString;
            reverse(revStr.begin(), revStr.end());
            cout << "Reversed Output: \"" << revStr << "\"\n";
        } 
        else if (choice != 144) {
            cout << "Invalid choice! Please select options correctly.\n";
        }

    } while (choice != 144);

    cout << "\nExiting String Operations System. Goodbye!\n";
    return 0;
}
