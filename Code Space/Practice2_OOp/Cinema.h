#ifndef Cinema_h
#define Cinema_h

#include <string>

class Cinema {
private:
    std::string name;
    std::string address;
    std::string website;

public:
    Cinema(std::string name, std::string address, std::string website) 
        : name(name), address(address), website(website) {}

    void showInfo() {}
    
    std::string toString() const {
        return "Кінотеатр: [Назва: " + name + ", Адреса: " + address + ", Веб-сайт: " + website + "]";
    }
};

#endif