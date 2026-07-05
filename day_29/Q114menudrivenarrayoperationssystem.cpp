#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int choice;

    do {
        cout << "\n========================================\n";
        cout << "        ARRAY OPERATIONS SYSTEM         \n";
        cout << "========================================\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element by Value\n";
        cout << "3. Search Element\n";
        cout << "4. Display Array\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int element;
            cout << "\nEnter element to insert: "; cin >> element;
            arr.push_back(element);
            cout << "System: Element inserted successfully!\n";
        } 
        else if (choice == 2) {
            int target;
            cout << "\nEnter element to delete: "; cin >> target;
            auto pos = find(arr.begin(), arr.end(), target);
            
            if (pos == arr.end()) {
                cout << "Error: Value not found in the array.\n";
            } else {
                arr.erase(pos);
                cout << "Success: Element removed from array.\n";
            }
        } 
        else if (choice == 3) {
            int target;
            cout << "\nEnter element to search: "; cin >> target;
            int foundIndex = -1;
            
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == target) {
                    foundIndex = i;
                    break;
                }
            }
            
            if (foundIndex == -1) {
                cout << "Result: Element not found in directory.\n";
            } else {
                cout << "Result: Element found at Index position [" << foundIndex << "]\n";
            }
        } 
        else if (choice == 4) {
            if (arr.empty()) {
                cout << "\nArray is completely empty.\n";
            } else {
                cout << "\nCurrent Array: [ ";
                for (int i = 0; i < arr.size(); i++) {
                    cout << arr[i] << " ";
                }
                cout << "]\n";
            }
        } 
        else if (choice != 144) {
            cout << "Invalid choice! Please match structural inputs.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Array System safely. Goodbye!\n";
    return 0;
}
