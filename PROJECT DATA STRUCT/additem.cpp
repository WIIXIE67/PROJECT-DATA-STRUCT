#include "LibrarySystem.h"
#include <iostream>

using namespace std;

LibraryReservationSystem::LibraryReservationSystem() {
    itemCount = 0; 
}

LibraryReservationSystem::~LibraryReservationSystem() {
   
}

void LibraryReservationSystem::AdiputraAiman() {
  
    if (itemCount >= MAX_BOOKS) {
        cout << "\n[RALAT] Sistem Penuh! Tidak boleh menambah reservasi baharu." << endl;
        return;
    }

    string bTitle, bAuthor, sId;
    int duration;

    cout << "\n=========================================" << endl;
    cout << "   TAMBAH RESERVASI BUKU BAHARU (ARRAY)   " << endl;
    cout << "=========================================" << endl;


    cin.ignore();
    cout << "Masukkan Tajuk Buku            : ";
    getline(cin, bTitle);

    cout << "Masukkan Nama Penulis          : ";
    getline(cin, bAuthor);

    cout << "Masukkan ID Pelajar (Peminjam) : ";
    cin >> sId;

    cout << "Masukkan Tempoh Pinjaman (Hari): ";
    cin >> duration;

    
    reservationArray[itemCount].bookTitle = bTitle;
    reservationArray[itemCount].authorName = bAuthor;
    reservationArray[itemCount].studentId = sId;
    reservationArray[itemCount].durationDays = duration;

    
    itemCount++;

    cout << "\n[BERJAYA] Reservasi untuk buku \"" << bTitle << "\" telah disimpan pada slot ke-" << itemCount << "." << endl;
    cout << "=========================================" << endl;
}