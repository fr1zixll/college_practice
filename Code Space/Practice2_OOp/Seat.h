#ifndef Seat_h
#define Seat_h

#include <string>

class Seat {
private:
    int rowNumber;
    int seatNumber;
    std::string category;

public:
    Seat(int rowNumber, int seatNumber, std::string category)
        : rowNumber(rowNumber), seatNumber(seatNumber), category(category) {}

    void locateViewer() {}

    std::string toString() const {
        return "Місце: [Ряд: " + std::to_string(rowNumber) + 
               ", Місце: " + std::to_string(seatNumber) + ", Категорія: " + category + "]";
    }
};

#endif