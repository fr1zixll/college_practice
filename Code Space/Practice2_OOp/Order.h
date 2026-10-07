#ifndef Order_h
#define Order_h

#include <string>

class Order {
private:
    std::string orderNumber;
    std::string dateTime;
    double totalAmount;
    std::string paymentStatus;

public:
    Order(std::string orderNumber, std::string dateTime, double totalAmount, std::string paymentStatus)
        : orderNumber(orderNumber), dateTime(dateTime), totalAmount(totalAmount), paymentStatus(paymentStatus) {}

    void processPayment() {}

    std::string toString() const {
        return "Замовлення: [Номер: " + orderNumber + ", Дата та час: " + dateTime + 
               ", Сума: " + std::to_string(totalAmount) + ", Статус оплати: " + paymentStatus + "]";
    }
};

#endif