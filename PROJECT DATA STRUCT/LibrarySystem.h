#pragma once
#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H
#include <string>


const int MAX_BOOKS = 100;


struct Book {
    std::string bookTitle;
    std::string authorName;
    std::string studentId;
    int durationDays;
};


class LibraryReservationSystem {
private:
    Book reservationArray[MAX_BOOKS]; 
    int itemCount;                    

public:
    LibraryReservationSystem();  // Constructor
    ~LibraryReservationSystem(); // Destructor

    void AdiputraAiman();
};

#endif