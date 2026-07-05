#include <bits/stdc++.h>
using namespace std;

struct Item {
    int id;
    string name;
    int stockQuantity;
    double price;
};

int main() {
    vector<Item> inventory;
    int choice;

    inventory.push_back({701, "Wireless Mouse", 45, 24.99});
    inventory.push_back({702, "Mechanical Keyboard", 12, 89.50});

    do {
        cout << "\n========================================\n";
        cout << "       INVENTORY MANAGEMENT SYSTEM      \n";
        cout << "========================================\n";
        cout << "1. Restock New Item Asset\n";
        cout << "2. View Warehouse Inventory\n";
        cout << "3. Search Item Specifications by ID\n";
        cout << "4. Update Stock Quantity Levels\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Item tempItem;
            cout << "\n--- Restock New Item Asset ---\n";
            cout << "Enter Item Unique ID: "; cin >> tempItem.id;
            cin.ignore();
            cout << "Enter Item Description Name: "; getline(cin, tempItem.name);
            cout << "Enter Initial Supply Count: "; cin >> tempItem.stockQuantity;
            cout << "Enter Base Market Value Price: $"; cin >> tempItem.price;

            inventory.push_back(tempItem);
            cout << "System: Item added to inventory ledger successfully!\n";
        } 
        else if (choice == 2) {
            if (inventory.empty()) {
                cout << "\nWarehouse stock is completely exhausted.\n";
            } else {
                cout << "\n--- Current Stock Manifest ---\n";
                for (int i = 0; i < inventory.size(); i++) {
                    cout << "ID: " << inventory[i].id 
                         << " | Item: " << inventory[i].name 
                         << " | In-Stock: " << inventory[i].stockQuantity 
                         << " units | Value: $" << inventory[i].price << "\n";
                }
            }
        } 
        else if (choice == 3) {
            int searchId;
            cout << "\nEnter Item ID to look up: "; cin >> searchId;
            int foundIdx = -1;

            for (int i = 0; i < inventory.size(); i++) {
                if (inventory[i].id == searchId) { foundIdx = i; break; }
            }

            if (foundIdx == -1) {
                cout << "Error: Item identification lookup missed.\n";
            } else {
                cout << "\n--- Item Profile Spec Sheet ---\n";
                cout << "Serial ID Number: " << inventory[foundIdx].id << "\n";
                cout << "Product Tracking Name: " << inventory[foundIdx].name << "\n";
                cout << "Current Units Available: " << inventory[foundIdx].stockQuantity << "\n";
                cout << "Cost Unit Margin: $" << inventory[foundIdx].price << "\n";
            }
        } 
        else if (choice == 4) {
            int targetId, adjustmentAmount;
            cout << "\nEnter Item ID for adjustments: "; cin >> targetId;
            
            int foundIdx = -1;
            for (int i = 0; i < inventory.size(); i++) {
                if (inventory[i].id == targetId) { foundIdx = i; break; }
            }

            if (foundIdx == -1) {
                cout << "Error: Serial tracking verification failed.\n";
            } else {
                cout << "Current Stock: " << inventory[foundIdx].stockQuantity << " units.\n";
                cout << "Enter additional quantity (or use negative number to reduce): "; 
                cin >> adjustmentAmount;
                
                if (inventory[foundIdx].stockQuantity + adjustmentAmount < 0) {
                    cout << "Error: Operation denied. Stock levels cannot drop below zero.\n";
                } else {
                    inventory[foundIdx].stockQuantity += adjustmentAmount;
                    cout << "Success: Updated balance counts are active. New Stock: " 
                         << inventory[foundIdx].stockQuantity << "\n";
                }
            }
        } 
        else if (choice != 144) {
            cout << "Invalid choice! Please choose an option from the menu.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Inventory Operations System safely. Goodbye!\n";
    return 0;
}
