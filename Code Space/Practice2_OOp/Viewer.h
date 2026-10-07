#ifndef Viewer_h
#define Viewer_h

#include <string>

class Viewer {
private:
    std::string fullName;
    std::string birthDate;
    std::string phoneNumber;
    std::string email;

public:
    Viewer(std::string fullName, std::string birthDate, std::string phoneNumber, std::string email)
        : fullName(fullName), birthDate(birthDate), phoneNumber(phoneNumber), email(email) {}

    void chooseSeatAndPay() {}

    std::string toString() const {
        return "Глядач: [ПІБ: " + fullName + ", Дата народження: " + birthDate + 
               ", Телефон: " + phoneNumber + ", Email: " + email + "]";
    }
};

#endif