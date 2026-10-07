#ifndef Controller_h
#define Controller_h

#include <string>

class Controller {
private:
    std::string employeeId;
    std::string fullName;

public:
    Controller(std::string employeeId, std::string fullName)
        : employeeId(employeeId), fullName(fullName) {}

    void scanQrCode() {}

    std::string toString() const {
        return "Контролер: [ID працівника: " + employeeId + ", ПІБ: " + fullName + "]";
    }
};

#endif