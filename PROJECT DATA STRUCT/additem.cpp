#include "LibrarySystem.h"
#include <iostream>

using namespace std;

// ========================================================
// Programmer Name: Mohamad Adiputra Aiman
// Function: Constructor (Mengawal pemulaan objek & indeks)
// ========================================================
LibraryReservationSystem::LibraryReservationSystem() {
    itemCount = 0; // Set jumlah buku asal kepada 0 semasa sistem bermula
}

// ========================================================
// Programmer Name: Mohamad Adiputra Aiman
// Function: Destructor (Kosong buat masa ini kerana array tiada memori dinamik)
// ========================================================
LibraryReservationSystem::~LibraryReservationSystem() {
    // Array diclear secara automatik apabila objek tamat skop
}

// ========================================================
// Programmer Name: Mohamad Adiputra Aiman
// Function: 1. Add Item (Menambah reservasi buku menggunakan Array)
// ========================================================
void LibraryReservationSystem::addReservation() {
    // Semak jika array sudah penuh sebelum meminta input
    if (itemCount >= MAX_BOOKS) {
        cout << "\n[RALAT] Sistem Penuh! Tidak boleh menambah reservasi baharu." << endl;
        return;
    }

    string bTitle, bAuthor, sId;
    int duration;

    cout << "\n=========================================" << endl;
    cout << "   TAMBAH RESERVASI BUKU BAHARU (ARRAY)   " << endl;
    cout << "=========================================" << endl;

    // Membersihkan buffer sebelum membaca rentetan teks
    cin.ignore();
    cout << "Masukkan Tajuk Buku            : ";
    getline(cin, bTitle);

    cout << "Masukkan Nama Penulis          : ";
    getline(cin, bAuthor);

    cout << "Masukkan ID Pelajar (Peminjam) : ";
    cin >> sId;

    cout << "Masukkan Tempoh Pinjaman (Hari): ";
    cin >> duration;

    // Memasukkan data ke dalam elemen array pada indeks semasa (itemCount)
    reservationArray[itemCount].bookTitle = bTitle;
    reservationArray[itemCount].authorName = bAuthor;
    reservationArray[itemCount].studentId = sId;
    reservationArray[itemCount].durationDays = duration;

    // Naikkan nilai itemCount sebanyak +1 untuk persediaan buku seterusnya
    itemCount++;

    cout << "\n[BERJAYA] Reservasi untuk buku \"" << bTitle << "\" telah disimpan pada slot ke-" << itemCount << "." << endl;
    cout << "=========================================" << endl;
}