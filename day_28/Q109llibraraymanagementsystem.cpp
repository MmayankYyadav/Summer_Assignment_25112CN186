#include <bits/stdc++.h>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued; 
};

struct Member {
    int id;
    string name;
    vector<int> borrowedBookIds; 
};

int main() {
    vector<Book> bookList;
    vector<Member> memberList;
    int choice;

    Book sampleBook1 = {101, "The C++ Language", "Bjarne Stroustrup", false};
    Book sampleBook2 = {102, "Clean Code", "Robert C. Martin", false};
    Member sampleMember = {1, "Alice Smith", {}};
    
    bookList.push_back(sampleBook1);
    bookList.push_back(sampleBook2);
    memberList.push_back(sampleMember);

    do {
        cout << "\n========================================\n";
        cout << "        LIBRARY MANAGEMENT SYSTEM       \n";
        cout << "========================================\n";
        cout << "1. Add New Book\n";
        cout << "2. Register New Member\n";
        cout << "3. Display All Books\n";
        cout << "4. Issue / Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Book tempBook;
            cout << "\n--- Add New Book ---\n";
            cout << "Enter Book ID: ";
            cin >> tempBook.id;
            cin.ignore(); 
            cout << "Enter Title: ";
            getline(cin, tempBook.title);
            cout << "Enter Author: ";
            getline(cin, tempBook.author);
            tempBook.isIssued = false; 

            bookList.push_back(tempBook);
            cout << "System: Book added successfully!\n";
        }
        else if (choice == 2) {
            Member tempMember;
            cout << "\n--- Register New Member ---\n";
            cout << "Enter Member ID: ";
            cin >> tempMember.id;
            cin.ignore();
            cout << "Enter Full Name: ";
            getline(cin, tempMember.name);

            memberList.push_back(tempMember);
            cout << "System: Member registered successfully!\n";
        }
        else if (choice == 3) {
            if (bookList.empty()) {
                cout << "\nLibrary catalog is completely empty.\n";
            } else {
                cout << "\n--- Current Library Catalog ---\n";
                for (int i = 0; i < bookList.size(); i++) {
                    cout << "ID: " << bookList[i].id 
                         << " | Title: " << bookList[i].title 
                         << " | Author: " << bookList[i].author 
                         << " | Status: " << (bookList[i].isIssued ? "Issued Out" : "Available") << "\n";
                }
            }
        }
        else if (choice == 4) {
            int bId, mId;
            cout << "\n--- Issue Book ---\n";
            cout << "Enter Book ID to borrow: "; cin >> bId;
            cout << "Enter Member ID: "; cin >> mId;

            int bookIndex = -1;
            for (int i = 0; i < bookList.size(); i++) {
                if (bookList[i].id == bId) {
                    bookIndex = i;
                    break;
                }
            }

            int memberIndex = -1;
            for (int i = 0; i < memberList.size(); i++) {
                if (memberList[i].id == mId) {
                    memberIndex = i;
                    break;
                }
            }

            if (bookIndex == -1) {
                cout << "Error: Book ID does not exist.\n";
            } else if (memberIndex == -1) {
                cout << "Error: Member ID does not exist.\n";
            } else if (bookList[bookIndex].isIssued) {
                cout << "Error: This book is already borrowed by someone else.\n";
            } else {
                bookList[bookIndex].isIssued = true;
                memberList[memberIndex].borrowedBookIds.push_back(bId);
                cout << "Success: '" << bookList[bookIndex].title << "' has been issued to " << memberList[memberIndex].name << ".\n";
            }
        }
        else if (choice == 5) {
            int bId, mId;
            cout << "\n--- Return Book ---\n";
            cout << "Enter Book ID to return: "; cin >> bId;
            cout << "Enter Member ID: "; cin >> mId;

            int bookIndex = -1, memberIndex = -1;
            for (int i = 0; i < bookList.size(); i++) {
                if (bookList[i].id == bId) { bookIndex = i; break; }
            }
            for (int i = 0; i < memberList.size(); i++) {
                if (memberList[i].id == mId) { memberIndex = i; break; }
            }

            if (bookIndex == -1 || memberIndex == -1) {
                cout << "Error: Invalid Book or Member ID.\n";
            } else {
                auto& items = memberList[memberIndex].borrowedBookIds;
                auto position = find(items.begin(), items.end(), bId);

                if (position == items.end()) {
                    cout << "Error: This user record shows they did not borrow this book.\n";
                } else {
                    bookList[bookIndex].isIssued = false;
                    items.erase(position);
                    cout << "Success: Book '" << bookList[bookIndex].title << "' returned to inventory.\n";
                }
            }
        }
        else if (choice != 144) {
            cout << "Invalid choice! Please try selecting numbers from the menu.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Library Management System safely. Goodbye!\n";
    return 0;
}