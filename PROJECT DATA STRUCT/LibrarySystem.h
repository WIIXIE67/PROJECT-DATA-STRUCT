#pragma once
#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H
#include <string>

// Maksimum kapasiti buku yang boleh disimpan dalam sistem array
const int MAX_BOOKS = 100;

// Struktur data untuk memegang maklumat sebuah buku
struct Book {
    std::string bookTitle;
    std::string authorName;
    std::string studentId;
    int durationDays;
};

// Kelas utama sistem menggunakan konsep Array
class LibraryReservationSystem {
private:
    Book reservationArray[MAX_BOOKS]; // Array untuk menyimpan semua rekod buku
    int itemCount;                    // Pembolehubah untuk menjejaki jumlah buku semasa

public:
    LibraryReservationSystem();  // Constructor
    ~LibraryReservationSystem(); // Destructor

    // Fungsi 1: Add Item menggunakan Array
    void addReservation();
};

#endif