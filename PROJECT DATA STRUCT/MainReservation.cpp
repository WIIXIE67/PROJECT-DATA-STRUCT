#include <iostream>
#include "LibrarySystem.h"

using namespace std;

// ========================================================
// Programmer Name: Mohamad Adiputra Aiman
// Function: main (Menu interaktif utama untuk pengguna)
// ========================================================
int main() {

    LibraryReservationSystem librarySystem;

    int choice;
    bool isRunning = true;


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


        switch (choice) {
        case 1:
   
            librarySystem.AdiputraAiman();
            break;

        case 2:
            cout << "\n[INFO] Fungsi 'Display' akan dikodkan oleh ahli kumpulan seterusnya." << endl;
            break;

        case 3:
            cout << "\n[INFO] Fungsi 'Sort' akan dikodkan oleh ahli kumpulan seterusnya." << endl;
            break;

        case 4:
            cout << "\n[INFO] Fungsi 'Search' akan dikodkan oleh ahli kumpulan seterusnya." << endl;
            break;

        case 5:
            cout << "\nTerima kasih kerana menggunakan sistem perpustakaan kami. Selamat tinggal!" << endl;
            isRunning = false; // Menamatkan gelung untuk keluar program
            break;

        default:
            cout << "\n[RALAT] Pilihan tidak sah! Sila masukkan nombor antara 1 hingga 5." << endl;
            break;
        }
    }

    return 0;
}