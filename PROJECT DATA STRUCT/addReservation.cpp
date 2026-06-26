#include "LibrarySystem.h"
#include <iostream>

using namespace std;

// Programmer Name: Mohamad Adiputra Aiman bin Awang
LibraryReservationSystem::LibraryReservationSystem() {
    itemCount = 0; // Set total reserved books to 0 when the system is initialized
}

// Programmer Name: Mohamad Adiputra Aiman bin Awang
LibraryReservationSystem::~LibraryReservationSystem() {
    // Array cleared automatically when the object is destroyed, no need for manual cleanup
}

// Programmer Name: Mohamad Adiputra Aiman bin Awang
void LibraryReservationSystem::addReservation() {
    // Check if the array is full before adding a new reservation
    if (itemCount >= MAX_BOOKS) {
        cout << "\n[RALAT] Sistem Penuh! Tidak boleh menambah reservasi baharu." << endl;
        return;
    }

    string bTitle, bAuthor, sId;
    int duration;
        cout << "\n=========================================" << endl;
        cout << "   TAMBAH RESERVASI BUKU BAHARU (ARRAY)   " << endl;
        cout << "=========================================" << endl;
        cout << "Tekan ctrl + Z untuk berrhenti." << endl;
        cin.ignore();
        cout << "Masukkan Tajuk Buku            : ";
        getline(cin, bTitle);

        cout << "Masukkan Nama Penulis          : ";
        getline(cin, bAuthor);

        cout << "Masukkan ID Pelajar (Peminjam) : ";
        cin >> sId;

        cout << "Masukkan Tempoh Pinjaman (Hari): ";
        cin >> duration;

        // Entering data into the reservationArray at the current itemCount index
        reservationArray[itemCount].bookTitle = bTitle;
        reservationArray[itemCount].authorName = bAuthor;
        reservationArray[itemCount].studentId = sId;
        reservationArray[itemCount].durationDays = duration;

        itemCount++;

        cout << "\n[BERJAYA] Reservasi untuk buku \"" << bTitle << "\" telah disimpan pada slot ke-" << itemCount << "." << endl;
        cout << "=========================================" << endl;
    }
