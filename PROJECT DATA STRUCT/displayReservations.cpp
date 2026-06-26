#include <iostream>
#include "LibrarySystem.h"
using namespace std;

// Programmer Name: Muhmammad Aiman Alif bin Zai Zi Pikri
void LibraryReservationSystem::searchReservation()
{
    // 1. Check if the array is empty first (Good practice, matching Zhi Hin's style)
    if (itemCount == 0)
    {
        cout << "\n[INFO] Tiada data reservasi untuk dicari setakat ini." << endl;
        return;
    }

    string searchTitle;
    cout << "\nMasukkan tajuk buku yang ingin dicari: ";

    // Clear the input buffer before taking a string with spaces
    cin >> ws;
    getline(cin, searchTitle);

    bool found = false;

    // 2. Loop through the array to find a match (Linear Search)
    for (int i = 0; i < itemCount; i++)
    {
        if (reservationArray[i].bookTitle == searchTitle)
        {
            cout << "\n[BERJAYA] Rekod ditemui!" << endl;
            cout << "-----------------------------------------" << endl;
            cout << "Tajuk Buku             : " << reservationArray[i].bookTitle << endl;
            cout << "Nama Penulis           : " << reservationArray[i].authorName << endl;
            cout << "ID Pelajar             : " << reservationArray[i].studentId << endl;
            cout << "Tempoh Pinjaman (Hari) : " << reservationArray[i].durationDays << endl;
            cout << "-----------------------------------------" << endl;

            found = true;
            break; // Stop searching once we find it
        }
    }

    // 3. If the loop finishes and nothing was found
    if (!found)
    {
        cout << "\n[RALAT] Buku dengan tajuk '" << searchTitle << "' tidak ditemui dalam senarai reservasi." << endl;
    }
}