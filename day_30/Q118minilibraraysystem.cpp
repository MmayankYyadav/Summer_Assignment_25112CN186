#include <bits/stdc++.h>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    vector<Book> library;
    int choice;

    do {
        cout << "\n========================================\n";
        cout << "          MINI LIBRARY SYSTEM           \n";
        cout << "========================================\n";
        cout << "Total Inventory: " << library.size() << " books\n";
        cout << "----------------------------------------\n";
        cout << "1. Add Book to Inventory\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by Title\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Book temp;
            cout << "\nEnter Book ID: ";
            cin >> temp.id;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, temp.title);
            cout << "Enter Author Name: ";
            getline(cin, temp.author);
            library.push_back(temp);
            cout << "System: Book cataloged successfully!\n";
        } 
        else if (choice == 2) {
            if (library.empty()) {
                cout << "Analysis: Library catalog is currently empty.\n";
            } else {
                cout << "\n%-10s %-25s %-20s\n", "Book ID", "Title", "Author";
                cout << "---------------------------------------------------------\n";
                for (const auto& b : library) {
                    printf("%-10d %-25s %-20s\n", b.id, b.title.c_str(), b.author.c_str());
                }
            }
        } 
        else if (choice == 3) {
            cin.ignore();
            string searchTitle;
            cout << "\nEnter book title to search: ";
            getline(cin, searchTitle);
            
            // Case-insensitive transformation for checking match
            string searchLower = searchTitle;
            transform(searchLower.begin(), searchLower.end(), searchLower.begin(), ::tolower);
            
            bool found = false;
            for (const auto& b : library) {
                string titleLower = b.title;
                transform(titleLower.begin(), titleLower.end(), titleLower.begin(), ::tolower);
                
                if (titleLower == searchLower) {
                    cout << "Analysis: Target book variant identified successfully!\n";
                    cout << "-> ID: " << b.id << " | Title: \"" << b.title << "\" | Author: " << b.author << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Analysis: Title could not be tracked within existing inventory.\n";
            }
        }
        else if (choice != 144) {
            cout << "Invalid choice! Please select options correctly.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Mini Library System. Goodbye!\n";
    return 0;
}
