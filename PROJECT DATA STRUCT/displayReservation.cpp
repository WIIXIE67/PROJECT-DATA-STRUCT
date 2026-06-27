#include "LibrarySystem.h"
#include <iostream>
#include <iomanip> // For neat output formatting

using namespace std;

// Programmer Name: Eyad Haleef bin Bahrin ( B152510044 )
void LibraryReservationSystem::displayReservations() {
    // 1. Check if there are any records in the array
    if (itemCount == 0) {
        cout << "\n[INFO] Tiada data reservasi untuk dipaparkan setakat ini." << endl;
        return;
    }

    cout << "\n=========================================================================" << endl;
    cout << "                    SENARAI SEMUA RESERVASI BUKU                         " << endl;
    cout << "=========================================================================" << endl;

    // Print table headers using formatting for clean columns
    cout << left
        << setw(5) << "No."
        << setw(25) << "Tajuk Buku"
        << setw(20) << "Nama Penulis"
        << setw(12) << "ID Pelajar"
        << setw(10) << "Tempoh" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    // 2. Loop through the array and display each active reservation
    for (int i = 0; i < itemCount; i++) {
        cout << left
            << setw(5) << (i + 1)
            << setw(25) << reservationArray[i].bookTitle
            << setw(20) << reservationArray[i].authorName
            << setw(12) << reservationArray[i].studentId
            << setw(10) << reservationArray[i].durationDays << endl;
    }

    cout << "=========================================================================" << endl;
    cout << "Jumlah keseluruhan rekod: " << itemCount << endl;
}
