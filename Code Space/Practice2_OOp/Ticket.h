#ifndef Ticket_h
#define Ticket_h

#include <string>

class Ticket {
private:
    std::string ticketNumber;
    std::string qrCode;
    double price;
    std::string ticketStatus;

public:
    Ticket(std::string ticketNumber, std::string qrCode, double price, std::string ticketStatus)
        : ticketNumber(ticketNumber), qrCode(qrCode), price(price), ticketStatus(ticketStatus) {}

    void validateTicket() {}

    std::string toString() const {
        return "Квиток: [Номер квитка: " + ticketNumber + ", QR-код: " + qrCode + 
               ", Ціна: " + std::to_string(price) + ", Статус: " + ticketStatus + "]";
    }
};

#endif