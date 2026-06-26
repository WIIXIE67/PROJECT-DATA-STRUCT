#pragma once
#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H
#include <string>

// Maximum number of books that can be reserved in the system
const int MAX_BOOKS = 100;

// Structure for holding book information
struct Book {
    std::string bookTitle;
    std::string authorName;
    std::string studentId;
    int durationDays = 0;
};

// Main class for the library reservation system using Array concept
class LibraryReservationSystem {
private:
	Book reservationArray[MAX_BOOKS]; // Array to store records of reserved books
    int itemCount;                    // Variable to track the current number of reserved books

public:
    LibraryReservationSystem();  // Constructor
    ~LibraryReservationSystem(); // Destructor

    // Function 1: Add Item using Array
    void addReservation();
	void displayReservations(); // Function to display all reservations
	void sortReservations();    // Function to sort reservations
	void searchReservation() const;   // Function to search for a reservation
};

#endif