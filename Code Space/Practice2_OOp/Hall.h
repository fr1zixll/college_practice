#ifndef Hall_h
#define Hall_h

#include <string>

class Hall {
private:
    int hallNumber;
    std::string technology;
    int capacity;

public:
    Hall(int hallNumber, std::string technology, int capacity)
        : hallNumber(hallNumber), technology(technology), capacity(capacity) {}

    void provideSeats() {}

    std::string toString() const {
        return "Кінозал: [Номер залу: " + std::to_string(hallNumber) + 
               ", Технологія: " + technology + ", Кількість місць: " + std::to_string(capacity) + "]";
    }
};

#endif