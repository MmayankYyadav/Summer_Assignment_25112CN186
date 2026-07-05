#include <bits/stdc++.h>
using namespace std;

struct Passenger {
    string name;
    string passportOrId;
};

struct Ticket {
    int ticketId;
    int showOrFlightId;
    string passengerName;
    string seatNumber;
    double price;
};

struct ShowOrFlight {
    int id;
    string destinationOrMovie;
    string dateTime;
    double basePrice;
    int totalSeats;
    int availableSeats;
    vector<string> bookedSeats; 
};

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool isSeatTaken(const vector<string>& seats, const string& seat) {
    return find(seats.begin(), seats.end(), seat) != seats.end();
}

int main() {
    vector<ShowOrFlight> eventList;
    vector<Ticket> ticketList;
    int choice;
    int nextTicketId = 5001; 

    eventList.push_back({101, "Flight to London", "2026-08-12 14:30", 450.0, 50, 49, {"A1"}});
    eventList.push_back({102, "Avengers Movie Premiere", "2026-07-20 19:00", 15.50, 100, 100, {}});
    
    ticketList.push_back({5000, 101, "Alice Smith", "A1", 450.0});

    do {
        cout << "\n========================================\n";
        cout << "        TICKET BOOKING SYSTEM           \n";
        cout << "========================================\n";
        cout << "1. Add New Show / Flight Route\n";
        cout << "2. View All Available Shows / Flights\n";
        cout << "3. Book a Ticket\n";
        cout << "4. Cancel a Ticket\n";
        cout << "5. Display Booked Tickets List\n";
        cout << "144. EXIT System\n";
        cout << "Enter your choice: ";
        
        if (!(cin >> choice)) {
            cout << "Error: Please enter a valid menu number.\n";
            clearInputBuffer();
            continue;
        }

        if (choice == 1) {
            ShowOrFlight tempEvent;
            cout << "\n--- Add New Show / Flight Route ---\n";
            cout << "Enter Unique Show/Flight ID: ";
            if (!(cin >> tempEvent.id)) {
                cout << "Invalid format! ID must be numeric.\n";
                clearInputBuffer();
                continue;
            }

            bool duplicate = false;
            for (const auto& ev : eventList) {
                if (ev.id == tempEvent.id) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                cout << "Error: An event with this ID already exists.\n";
                continue;
            }

            cin.ignore();
            cout << "Enter Name (Destination or Movie Title): ";
            getline(cin, tempEvent.destinationOrMovie);
            cout << "Enter Date & Time (YYYY-MM-DD HH:MM): ";
            getline(cin, tempEvent.dateTime);

            cout << "Enter Base Ticket Price: $";
            if (!(cin >> tempEvent.basePrice) || tempEvent.basePrice < 0) {
                cout << "Invalid price! Creation aborted.\n";
                clearInputBuffer();
                continue;
            }

            cout << "Enter Total Seating Capacity: ";
            if (!(cin >> tempEvent.totalSeats) || tempEvent.totalSeats <= 0) {
                cout << "Invalid capacity! Creation aborted.\n";
                clearInputBuffer();
                continue;
            }

            tempEvent.availableSeats = tempEvent.totalSeats;
            eventList.push_back(tempEvent);
            cout << "System: Route/Show registered successfully!\n";

        } else if (choice == 2) {
            if (eventList.empty()) {
                cout << "\nNo scheduled flights or shows available.\n";
            } else {
                cout << "\n--- Scheduled Shows & Flights ---\n";
                for (const auto& ev : eventList) {
                    cout << "ID: " << ev.id 
                         << " | Name: " << ev.destinationOrMovie 
                         << " | Schedule: " << ev.dateTime 
                         << " | Price: $" << ev.basePrice 
                         << " | Available Seats: " << ev.availableSeats << "/" << ev.totalSeats << "\n";
                }
            }

        } else if (choice == 3) {
            int evId;
            cout << "\n--- Book a Ticket ---\n";
            cout << "Enter Show/Flight ID: "; cin >> evId;

            int evIndex = -1;
            for (size_t i = 0; i < eventList.size(); i++) {
                if (eventList[i].id == evId) { evIndex = i; break; }
            }

            if (evIndex == -1) {
                cout << "Error: Show/Flight ID not found.\n";
            } else if (eventList[evIndex].availableSeats <= 0) {
                cout << "Error: Sorry, this event is completely sold out!\n";
            } else {
                Ticket tempTicket;
                tempTicket.ticketId = nextTicketId++;
                tempTicket.showOrFlightId = evId;
                tempTicket.price = eventList[evIndex].basePrice;

                cin.ignore();
                cout << "Enter Passenger/Customer Full Name: ";
                getline(cin, tempTicket.passengerName);
                cout << "Enter Desired Seat Code (e.g., A2, 14B): ";
                cin >> tempTicket.seatNumber;

                if (isSeatTaken(eventList[evIndex].bookedSeats, tempTicket.seatNumber)) {
                    cout << "Error: Seat " << tempTicket.seatNumber << " is already reserved. Booking failed.\n";
                    nextTicketId--; 
                } else {
                    eventList[evIndex].availableSeats--;
                    eventList[evIndex].bookedSeats.push_back(tempTicket.seatNumber);
                    ticketList.push_back(tempTicket);

                    cout << "Success! Ticket issued safely.\n";
                    cout << "Ticket Confirmation ID: " << tempTicket.ticketId 
                         << " | Assigned Seat: " << tempTicket.seatNumber << "\n";
                }
            }

        } else if (choice == 4) {
            int tId;
            cout << "\n--- Cancel a Ticket ---\n";
            cout << "Enter Ticket Confirmation ID to cancel: "; cin >> tId;

            int ticketIndex = -1;
            for (size_t i = 0; i < ticketList.size(); i++) {
                if (ticketList[i].ticketId == tId) { ticketIndex = i; break; }
            }

            if (ticketIndex == -1) {
                cout << "Error: Invalid Ticket ID. Cancellation denied.\n";
            } else {
                int linkedEventId = ticketList[ticketIndex].showOrFlightId;
                string seatToFree = ticketList[ticketIndex].seatNumber;

                for (size_t i = 0; i < eventList.size(); i++) {
                    if (eventList[i].id == linkedEventId) {
                        eventList[i].availableSeats++;
                      
                        auto& sList = eventList[i].bookedSeats;
                        auto pos = find(sList.begin(), sList.end(), seatToFree);
                        if (pos != sList.end()) sList.erase(pos);
                        break;
                    }
                }

                cout << "Success: Ticket #" << tId << " canceled. Seat " << seatToFree << " is now open.\n";
                ticketList.erase(ticketList.begin() + ticketIndex);
            }

        } else if (choice == 5) {
            if (ticketList.empty()) {
                cout << "\nNo active ticket reservations found in the manifest.\n";
            } else {
                cout << "\n--- Master Ticket Manifest ---\n";
                for (const auto& tk : ticketList) {
                    cout << "Ticket ID: " << tk.ticketId 
                         << " | Event/Flight ID: " << tk.showOrFlightId 
                         << " | Passenger: " << tk.passengerName 
                         << " | Seat: " << tk.seatNumber 
                         << " | Paid: $" << tk.price << "\n";
                }
            }
        } else if (choice != 144) {
            cout << "Invalid choice! Please choose an option from the menu.\n";
        }
    } while (choice != 144);

    cout << "\nExiting Ticket Booking System safely. Goodbye!\n";
    return 0;
}
