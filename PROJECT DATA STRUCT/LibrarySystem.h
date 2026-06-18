#pragma once
#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H

#include <string>

struct BookNode {
    std::string bookTitle;
    std::string authorName;
    std::string studentId;
    int durationDays;
    BookNode* pNext;
};


class LibraryReservationSystem {
private:
    BookNode* pHead;
    BookNode* pCurr;

public:
    LibraryReservationSystem();  // Constructor
    ~LibraryReservationSystem(); // Destructor


    void AdiputraAiman();

    // void displayItems();
    // void sortItems();
    // void searchItems();
};

#endif