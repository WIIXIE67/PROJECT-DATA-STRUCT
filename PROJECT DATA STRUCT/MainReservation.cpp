#include <iostream>
#include "LibrarySystem.h"

using namespace std;


// Programmer Name: Mohamad Adiputra Aimanbin Awang
int main() {
    // Creating system object from LibraryReservationSystem class
    LibraryReservationSystem librarySystem;

    int choice;
    bool isRunning = true;

	// Main loop for menu to ensure menu always display until user choose to exit
    while (isRunning) {
        cout << "\n=========================================" << endl;
        cout << "   CAMPUS LIBRARY BOOK RESERVATION SYSTEM " << endl;
        cout << "=========================================" << endl;
        cout << "1. Add New Reservation " << endl;
        cout << "2. Display All Reservations " << endl;
        cout << "3. Sort Reservations " << endl;
        cout << "4. Search Reservation " << endl;
        cout << "5. Exit System" << endl;
        cout << "=========================================" << endl;
        cout << "Masukkan pilihan anda (1-5): ";
        cin >> choice;

        // Process user chose with switch-case
        switch (choice) {
        case 1:
            // Call Function add item/reservation
            librarySystem.addReservation();
            break;

        case 2:
            librarySystem.searchReservations();
            break;

        case 3:
            librarySystem.sortReservations();
            break;

        case 4:
    		librarySystem.searchReservation();
            break;

        case 5:
            cout << "\nTerima kasih kerana menggunakan sistem perpustakaan kami. Selamat tinggal!" << endl;
			isRunning = false; // End loop to exit the program
            break;

        default:
            cout << "\n[RALAT] Pilihan tidak sah! Sila masukkan nombor antara 1 hingga 5." << endl;
            break;
        }
    }

    return 0;
}
