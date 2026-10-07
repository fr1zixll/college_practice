#ifndef Session_h
#define Session_h

#include <string>

class Session {
private:
    std::string date;
    std::string time;
    std::string format;
    std::string technology;
    double price;

public:
    Session(std::string date, std::string time, std::string format, std::string technology, double price)
        : date(date), time(time), format(format), technology(technology), price(price) {}

    void bindTimeToMovie() {}

    std::string toString() const {
        return "Сеанс: [Дата: " + date + ", Час: " + time + ", Формат: " + format + 
               ", Технологія: " + technology + ", Ціна: " + std::to_string(price) + "]";
    }
};

#endif