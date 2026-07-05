#include <bits/stdc++.h>
using namespace std;

struct Interaction {
    string date;      
    string notes;    
};

struct Contact {
    int id;
    string name;
    string phoneNumber;
    string email;
    string groupTag;  
    vector<Interaction> logs; 
};

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    vector<Contact> contactList;
    int choice;
    int nextContactId = 101;

    contactList.push_back({100, "Alice Smith", "+1-555-0199", "alice@example.com", "Work", 
                          {{"2026-05-10", "Initial introduction call."}, {"2026-06-15", "Discussed project timelines."}}});

    do {
        cout << "\n========================================\n";
        cout << "       CONTACT MANAGEMENT SYSTEM        \n";
        cout << "========================================\n";
        cout << "1. Add New Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by Name or Group\n";
        cout << "4. Log a New Interaction Note\n";
        cout << "5. Delete a Contact\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        
        if (!(cin >> choice)) {
            cout << "Error: Please enter a valid menu number.\n";
            clearInputBuffer();
            continue;
        }

        if (choice == 1) {
            Contact tempContact;
            tempContact.id = nextContactId++;

            cin.ignore();
            cout << "\n--- Add New Contact (Assigned ID: " << tempContact.id << ") ---\n";
            cout << "Enter Full Name: ";
            getline(cin, tempContact.name);
            cout << "Enter Phone Number: ";
            getline(cin, tempContact.phoneNumber);
            cout << "Enter Email Address: ";
            getline(cin, tempContact.email);
            cout << "Enter Group Category (e.g., Family, Work, Friends): ";
            getline(cin, tempContact.groupTag);

            contactList.push_back(tempContact);
            cout << "System: Contact added successfully!\n";

        } else if (choice == 2) {
            if (contactList.empty()) {
                cout << "\nYour address book is completely empty.\n";
            } else {
                cout << "\n--- Contact Directory ---\n";
                for (const auto& c : contactList) {
                    cout << "ID: " << c.id 
                         << " | Name: " << c.name 
                         << " | Phone: " << c.phoneNumber 
                         << " | Email: " << c.email 
                         << " | Group: [" << c.groupTag << "]\n";
                }
            }

        } else if (choice == 3) {
            cin.ignore();
            string searchKey;
            cout << "\n--- Search Directory ---\n";
            cout << "Enter Name or Group Tag to filter: ";
            getline(cin, searchKey);

            bool found = false;
            cout << "\n--- Matching Results ---\n";
            for (const auto& c : contactList) {
                if (c.name.find(searchKey) != string::npos || c.groupTag.find(searchKey) != string::npos) {
                    cout << "ID: " << c.id << " | Name: " << c.name << " | Phone: " << c.phoneNumber << " | Group: [" << c.groupTag << "]\n";
                    found = true;
                }
            }
            if (!found) {
                cout << "No matching contacts found for '" << searchKey << "'.\n";
            }

        } else if (choice == 4) {
            int cId;
            cout << "\n--- Log Interaction ---\n";
            cout << "Enter Contact ID: "; cin >> cId;

            int targetIndex = -1;
            for (size_t i = 0; i < contactList.size(); i++) {
                if (contactList[i].id == cId) { targetIndex = i; break; }
            }

            if (targetIndex == -1) {
                cout << "Error: Contact ID not found.\n";
            } else {
                Interaction tempLog;
                cin.ignore();
                cout << "Enter Date (YYYY-MM-DD): ";
                getline(cin, tempLog.date);
                cout << "Enter Summary Notes: ";
                getline(cin, tempLog.notes);

                contactList[targetIndex].logs.push_back(tempLog);
                cout << "Success: Interaction log captured for " << contactList[targetIndex].name << ".\n";
                
                cout << "\n--- Updated Interaction Timeline ---\n";
                for (const auto& entry : contactList[targetIndex].logs) {
                    cout << "  * [" << entry.date << "] " << entry.notes << "\n";
                }
            }

        } else if (choice == 5) {
            int cId;
            cout << "\n--- Delete Contact ---\n";
            cout << "Enter Contact ID to erase: "; cin >> cId;

            int targetIndex = -1;
            for (size_t i = 0; i < contactList.size(); i++) {
                if (contactList[i].id == cId) { targetIndex = i; break; }
            }

            if (targetIndex == -1) {
                cout << "Error: Contact not found. Deletion cancelled.\n";
            } else {
                cout << "Success: Contact '" << contactList[targetIndex].name << "' removed safely from memory.\n";
                contactList.erase(contactList.begin() + targetIndex);
            }

        } else if (choice != 144) {
            cout << "Invalid choice! Please choose an option from the menu.\n";
        }
    } while (choice != 144);

    cout << "\nExiting Contact Management System safely. Goodbye!\n";
    return 0;
}
