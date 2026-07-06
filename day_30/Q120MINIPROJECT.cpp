#include <bits/stdc++.h>
using namespace std;

// Struct to store parking slot data
struct ParkingSlot {
    int slotNumber;
    string licensePlate;
    string vehicleType;
    int entryHour; // Simplified hours (0-23) to calculate tariff
    bool isOccupied;
};

void initializeGarage(vector<ParkingSlot>& garage, int totalSlots);
void displayGarageStatus(const vector<ParkingSlot>& garage);
void checkInVehicle(vector<ParkingSlot>& garage);
void checkOutVehicle(vector<ParkingSlot>& garage);
void trackVehicle(const vector<ParkingSlot>& garage);
double calculateTariff(string type, int hoursParked);

int main() {
    const int TOTAL_SLOTS = 10; 
    vector<ParkingSlot> garage;
    
    // Setup structural array state before entering interactive loop
    initializeGarage(garage, TOTAL_SLOTS);
    int choice;

    do {
        // Dynamic stats calculation using vector functions
        int occupiedCount = 0;
        for (const auto& slot : garage) {
            if (slot.isOccupied) occupiedCount++;
        }
        int availableSlots = TOTAL_SLOTS - occupiedCount;

        cout << "\n========================================\n";
        cout << "       PARKING MANAGEMENT SYSTEM        \n";
        cout << "========================================\n";
        cout << "Available Garage Slots: " << availableSlots << " / " << TOTAL_SLOTS << " Empty\n";
        cout << "----------------------------------------\n";
        cout << "1. Log Incoming Vehicle Entry\n";
        cout << "2. Process Departure & Bill Settlement\n";
        cout << "3. Track Vehicle Location via Plate\n";
        cout << "4. Display Live Garage Grid Map\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            checkInVehicle(garage);
        } 
        else if (choice == 2) {
            checkOutVehicle(garage);
        } 
        else if (choice == 3) {
            trackVehicle(garage);
        } 
        else if (choice == 4) {
            displayGarageStatus(garage);
        }
        else if (choice != 144) {
            cout << "Invalid choice! Please select options correctly.\n";
        }

    } while (choice != 144);

    cout << "\nExiting Parking Management System. Goodbye!\n";
    return 0;
}

// Function 1: Initializes the database grid map
void initializeGarage(vector<ParkingSlot>& garage, int totalSlots) {
    for (int i = 1; i <= totalSlots; i++) {
        garage.push_back({i, "EMPTY", "NONE", 0, false});
    }
}

// Function 2: Processes vehicle allocation entry logs
void checkInVehicle(vector<ParkingSlot>& garage) {
    cin.ignore();
    bool slotAllocated = false;

    for (auto& slot : garage) {
        if (!slot.isOccupied) {
            cout << "\n[Slot #" << slot.slotNumber << " allocated automatically]\n";
            cout << "Enter License Plate Registration: ";
            getline(cin, slot.licensePlate);
            cout << "Enter Vehicle Category (Car / Bike / SUV): ";
            getline(cin, slot.vehicleType);
            cout << "Enter Entry Hour (0-23 Military Time Format): ";
            cin >> slot.entryHour;

            slot.isOccupied = true;
            cout << "System: Vehicle registered and slot locked successfully!\n";
            slotAllocated = true;
            break;
        }
    }

    if (!slotAllocated) {
        cout << "Analysis: Allocation rejected. All parking layout bays are packed.\n";
    }
}

// Function 3: Processes checkout processing arrays, matching tags, and calculates costs
void checkOutVehicle(vector<ParkingSlot>& garage) {
    cin.ignore();
    string targetPlate;
    cout << "\nEnter departure vehicle License Plate to process exit: ";
    getline(cin, targetPlate);

    // Case-insensitive configuration
    string targetLower = targetPlate;
    transform(targetLower.begin(), targetLower.end(), targetLower.begin(), ::tolower);

    bool found = false;
    for (auto& slot : garage) {
        if (slot.isOccupied) {
            string currentPlateLower = slot.licensePlate;
            transform(currentPlateLower.begin(), currentPlateLower.end(), currentPlateLower.begin(), ::tolower);

            if (currentPlateLower == targetLower) {
                int exitHour;
                cout << "Found vehicle at Slot #" << slot.slotNumber << "\n";
                cout << "Enter Current Exit Hour (0-23 Military Time Format): ";
                cin >> exitHour;

                // Simple check for day boundary crossovers
                int hoursParked = exitHour - slot.entryHour;
                if (hoursParked <= 0) hoursParked = 1; // Minimum billing baseline setup

                double finalFee = calculateTariff(slot.vehicleType, hoursParked);

                cout << "\n========================================\n";
                cout << "          BILL SETTLEMENT INVOICE        \n";
                cout << "========================================\n";
                cout << "Registration: " << slot.licensePlate << "\n";
                cout << "Classification: " << slot.vehicleType << "\n";
                cout << "Total Duration: " << hoursParked << " Hours\n";
                cout << "----------------------------------------\n";
                printf("TOTAL DUE TARIFF: ₹ %.2f\n", finalFee);
                cout << "========================================\n";

                // Wipe data states back to blank setup values
                slot.licensePlate = "EMPTY";
                slot.vehicleType = "NONE";
                slot.entryHour = 0;
                slot.isOccupied = false;

                cout << "System: Payment processed and slot freed successfully!\n";
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "Analysis: Search failure. Active profile matching plate not identified.\n";
    }
}

// Function 4: Linear search through structures array using strings checking routines
void trackVehicle(const vector<ParkingSlot>& garage) {
    cin.ignore();
    string searchPlate;
    cout << "\nEnter plate index tracking target text: ";
    getline(cin, searchPlate);

    string searchLower = searchPlate;
    transform(searchLower.begin(), searchLower.end(), searchLower.begin(), ::tolower);

    bool found = false;
    for (const auto& slot : garage) {
        if (slot.isOccupied) {
            string plateLower = slot.licensePlate;
            transform(plateLower.begin(), plateLower.end(), plateLower.begin(), ::tolower);

            if (plateLower == searchLower) {
                cout << "Analysis: Target tracking vector node locked down!\n";
                cout << "-> Located at Slot #" << slot.slotNumber << " | Class: " << slot.vehicleType << " | Checked-In Hour: " << slot.entryHour << "\n";
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "Analysis: Plate parameters matched nothing across active floor sectors.\n";
    }
}

// Function 5: Formats layout dashboard table strings matrix data
void displayGarageStatus(const vector<ParkingSlot>& garage) {
    cout << "\n" << left << setw(10) << "Slot ID" << setw(20) << "Plate Number" << setw(15) << "Category" << setw(12) << "Status" << "\n";
    cout << "------------------------------------------------------------\n";
    for (const auto& slot : garage) {
        string statusStr = slot.isOccupied ? "OCCUPIED" : "AVAILABLE";
        cout << left << setw(10) << slot.slotNumber 
             << setw(20) << slot.licensePlate 
             << setw(15) << slot.vehicleType 
             << setw(12) << statusStr << "\n";
    }
}

// Function 6: Computes cost rates dynamically using multi-path parameters
double calculateTariff(string type, int hoursParked) {
    // Standardize text strings configuration
    transform(type.begin(), type.end(), type.begin(), ::tolower);
    
    double hourlyRate = 20.00; // Standard baseline configuration parameters
    if (type == "bike") {
        hourlyRate = 10.00;
    } else if (type == "suv") {
        hourlyRate = 40.00;
    }
    
    return hourlyRate * hoursParked;
}
