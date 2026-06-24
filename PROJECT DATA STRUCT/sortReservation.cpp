#include "LibrarySystem.h"
#include <iostream>

using namespace std;

// Programmer Name: Look Zhi Hin
void LibraryReservationSystem::sortReservations()
{
    if (itemCount == 0)
    {
        cout << "\n[INFO] Tiada data untuk disusun." << endl;
        return;
    }

    // Bubble Sort by Book Title
    for (int i = 0; i < itemCount - 1; i++)
    {
        for (int j = 0; j < itemCount - i - 1; j++)
        {
            if (reservationArray[j].bookTitle >
                reservationArray[j + 1].bookTitle)
            {
                Book temp = reservationArray[j];
                reservationArray[j] = reservationArray[j + 1];
                reservationArray[j + 1] = temp;
            }
        }
    }

    cout << "\n[BERJAYA] Semua reservasi telah disusun mengikut tajuk buku (A-Z)." << endl;
}