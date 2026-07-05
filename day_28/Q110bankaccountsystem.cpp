#include <bits/stdc++.h>
using namespace std;

struct Transaction {
    string type;      
    double amount;
    string details;   
};

struct Account {
    int accountNumber;
    string holderName;
    double balance;
    vector<Transaction> history; 
};

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    vector<Account> accountList;
    int choice;

    accountList.push_back({1001, "Alice Smith", 5000.0, {{"Deposit", 5000.0, "Initial Setup"}}});
    accountList.push_back({1002, "Bob Jones", 1200.50, {{"Deposit", 1200.50, "Initial Setup"}}});

    do {
        cout << "\n========================================\n";
        cout << "        BANK MANAGEMENT SYSTEM          \n";
        cout << "========================================\n";
        cout << "1. Open New Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Transfer Funds\n";
        cout << "5. Display Account Details & History\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        
        if (!(cin >> choice)) {
            cout << "Error: Please enter a valid menu number.\n";
            clearInputBuffer();
            continue;
        }

        if (choice == 1) {
            Account tempAcc;
            cout << "\n--- Open New Account ---\n";
            cout << "Enter Unique Account Number: ";
            if (!(cin >> tempAcc.accountNumber)) {
                cout << "Invalid format! Account number must be numeric.\n";
                clearInputBuffer();
                continue;
            }

            bool duplicate = false;
            for (const auto& acc : accountList) {
                if (acc.accountNumber == tempAcc.accountNumber) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                cout << "Error: An account with this number already exists.\n";
                continue;
            }

            cin.ignore();
            cout << "Enter Full Name: ";
            getline(cin, tempAcc.holderName);

            cout << "Enter Initial Deposit Amount: $";
            if (!(cin >> tempAcc.balance) || tempAcc.balance < 0) {
                cout << "Invalid amount! Account creation aborted.\n";
                clearInputBuffer();
                continue;
            }

            tempAcc.history.push_back({"Deposit", tempAcc.balance, "Initial Setup"});
            accountList.push_back(tempAcc);
            cout << "System: Account created successfully for " << tempAcc.holderName << "!\n";

        } else if (choice == 2) {
            int accNum;
            double amount;
            cout << "\n--- Deposit Money ---\n";
            cout << "Enter Account Number: "; cin >> accNum;

            int accIndex = -1;
            for (size_t i = 0; i < accountList.size(); i++) {
                if (accountList[i].accountNumber == accNum) { accIndex = i; break; }
            }

            if (accIndex == -1) {
                cout << "Error: Account number not found.\n";
            } else {
                cout << "Enter Deposit Amount: $"; cin >> amount;
                if (amount <= 0) {
                    cout << "Error: Deposit amount must be positive.\n";
                } else {
                    accountList[accIndex].balance += amount;
                    accountList[accIndex].history.push_back({"Deposit", amount, "Self Deposit"});
                    cout << "Success: $" << amount << " deposited. New Balance: $" << accountList[accIndex].balance << "\n";
                }
            }

        } else if (choice == 3) {
            int accNum;
            double amount;
            cout << "\n--- Withdraw Money ---\n";
            cout << "Enter Account Number: "; cin >> accNum;

            int accIndex = -1;
            for (size_t i = 0; i < accountList.size(); i++) {
                if (accountList[i].accountNumber == accNum) { accIndex = i; break; }
            }

            if (accIndex == -1) {
                cout << "Error: Account number not found.\n";
            } else {
                cout << "Enter Withdrawal Amount: $"; cin >> amount;
                if (amount <= 0) {
                    cout << "Error: Amount must be positive.\n";
                } else if (accountList[accIndex].balance < amount) {
                    cout << "Error: Insufficient balance. Current balance: $" << accountList[accIndex].balance << "\n";
                } else {
                    accountList[accIndex].balance -= amount;
                    accountList[accIndex].history.push_back({"Withdraw", amount, "Self Withdrawal"});
                    cout << "Success: $" << amount << " withdrawn. New Balance: $" << accountList[accIndex].balance << "\n";
                }
            }

        } else if (choice == 4) {
            int srcAcc, destAcc;
            double amount;
            cout << "\n--- Transfer Funds ---\n";
            cout << "Enter Your Account Number: "; cin >> srcAcc;
            cout << "Enter Recipient Account Number: "; cin >> destAcc;

            int srcIndex = -1, destIndex = -1;
            for (size_t i = 0; i < accountList.size(); i++) {
                if (accountList[i].accountNumber == srcAcc) srcIndex = i;
                if (accountList[i].accountNumber == destAcc) destIndex = i;
            }

            if (srcIndex == -1 || destIndex == -1) {
                cout << "Error: One or both account numbers are invalid.\n";
            } else if (srcIndex == destIndex) {
                cout << "Error: Cannot transfer money to the same account.\n";
            } else {
                cout << "Enter Transfer Amount: $"; cin >> amount;
                if (amount <= 0) {
                    cout << "Error: Transfer amount must be positive.\n";
                } else if (accountList[srcIndex].balance < amount) {
                    cout << "Error: Insufficient funds to make this transfer.\n";
                } else {
                   
                    accountList[srcIndex].balance -= amount;
                    accountList[destIndex].balance += amount;

                    accountList[srcIndex].history.push_back({"Transfer", amount, "Sent to Acc #" + to_string(destAcc)});
                    
                    accountList[destIndex].history.push_back({"Transfer", amount, "Received from Acc #" + to_string(srcAcc)});

                    cout << "Success: Transferred $" << amount << " to " << accountList[destIndex].holderName << " successfully.\n";
                }
            }

        } else if (choice == 5) {
            int accNum;
            cout << "\n--- Account Statement ---\n";
            cout << "Enter Account Number: "; cin >> accNum;

            int accIndex = -1;
            for (size_t i = 0; i < accountList.size(); i++) {
                if (accountList[i].accountNumber == accNum) { accIndex = i; break; }
            }

            if (accIndex == -1) {
                cout << "Error: Account does not exist.\n";
            } else {
                cout << "\nAccount Holder: " << accountList[accIndex].holderName << "\n";
                cout << "Account Number: " << accountList[accIndex].accountNumber << "\n";
                cout << "Current Balance: $" << accountList[accIndex].balance << "\n";
                cout << "----------------------------------------\n";
                cout << "Transaction History:\n";
                
                if (accountList[accIndex].history.empty()) {
                    cout << "  No transactions recorded yet.\n";
                } else {
                    for (const auto& tx : accountList[accIndex].history) {
                        cout << "  [" << tx.type << "] $" << tx.amount << " | Details: " << tx.details << "\n";
                    }
                }
            }
        } else if (choice != 144) {
            cout << "Invalid choice! Please choose an option from the menu.\n";
        }
    } while (choice != 144);

    cout << "\nExiting Bank Management System safely. Goodbye!\n";
    return 0;
}
