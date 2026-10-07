#include <iostream>
#include <string>
#include "Cinema.h"
#include "Movie.h"
#include "Hall.h"
#include "Session.h"
#include "Seat.h"
#include "Order.h"
#include "Ticket.h"
#include "Viewer.h"
#include "Controller.h"

int main() {
    std::setlocale(LC_ALL, "Ukrainian");

    std::cout << "=== Введення даних про сутності системи кінотеатру ===\n\n";

    std::string cinemaName, cinemaAddress, cinemaWebsite;
    std::cout << "--- Кінотеатр ---\n";
    std::cout << "Введіть назву кінотеатру: ";
    std::getline(std::cin, cinemaName);
    std::cout << "Введіть адресу: ";
    std::getline(std::cin, cinemaAddress);
    std::cout << "Введіть веб-сайт: ";
    std::getline(std::cin, cinemaWebsite);
    Cinema cinema(cinemaName, cinemaAddress, cinemaWebsite);

    std::string movieTitle, movieGenre;
    int movieAge, movieDuration;
    std::cout << "\n--- Фільм ---\n";
    std::cout << "Введіть назву фільму: ";
    std::getline(std::cin, movieTitle);
    std::cout << "Введіть вікове обмеження (наприклад, 12): ";
    std::cin >> movieAge;
    std::cout << "Введіть тривалість у хвилинах: ";
    std::cin >> movieDuration;
    std::cin.ignore();
    std::cout << "Введіть жанр: ";
    std::getline(std::cin, movieGenre);
    Movie movie(movieTitle, movieAge, movieDuration, movieGenre);

    int hallNumber, hallCapacity;
    std::string hallTech;
    std::cout << "\n--- Кінозал ---\n";
    std::cout << "Введіть номер залу: ";
    std::cin >> hallNumber;
    std::cout << "Введіть технологію залу (наприклад, IMAX): ";
    std::cin.ignore();
    std::getline(std::cin, hallTech);
    std::cout << "Введіть місткість залу: ";
    std::cin >> hallCapacity;
    Hall hall(hallNumber, hallTech, hallCapacity);

    std::string sessionDate, sessionTime, sessionFormat, sessionTech;
    double sessionPrice;
    std::cout << "\n--- Сеанс ---\n";
    std::cout << "Введіть дату сеансу (РРРР-ММ-ДД): ";
    std::cin.ignore();
    std::getline(std::cin, sessionDate);
    std::cout << "Введіть час сеансу (ХХ:ХХ): ";
    std::getline(std::cin, sessionTime);
    std::cout << "Введіть формат (2D/3D): ";
    std::getline(std::cin, sessionFormat);
    std::cout << "Введіть технологію сеансу: ";
    std::getline(std::cin, sessionTech);
    std::cout << "Введіть ціну квитка: ";
    std::cin >> sessionPrice;
    Session session(sessionDate, sessionTime, sessionFormat, sessionTech, sessionPrice);

    int rowNum, seatNum;
    std::string seatCategory;
    std::cout << "\n--- Місце в залі ---\n";
    std::cout << "Введіть номер ряду: ";
    std::cin >> rowNum;
    std::cout << "Введіть номер місця: ";
    std::cin >> seatNum;
    std::cout << "Введіть категорію місця (VIP/Звичайне): ";
    std::cin.ignore();
    std::getline(std::cin, seatCategory);
    Seat seat(rowNum, seatNum, seatCategory);

    std::string orderNum, orderDate, orderStatus;
    double orderAmount;
    std::cout << "\n--- Замовлення ---\n";
    std::cout << "Введіть номер замовлення: ";
    std::getline(std::cin, orderNum);
    std::cout << "Введіть дату та час транзакції: ";
    std::getline(std::cin, orderDate);
    std::cout << "Введіть суму замовлення: ";
    std::cin >> orderAmount;
    std::cout << "Введіть статус оплати: ";
    std::cin.ignore();
    std::getline(std::cin, orderStatus);
    Order order(orderNum, orderDate, orderAmount, orderStatus);

    std::string ticketNum, qrCode, ticketStatus;
    double ticketPrice;
    std::cout << "\n--- Квиток у кіно ---\n";
    std::cout << "Введіть номер квитка: ";
    std::getline(std::cin, ticketNum);
    std::cout << "Введіть дані QR-коду: ";
    std::getline(std::cin, qrCode);
    std::cout << "Введіть ціну квитка: ";
    std::cin >> ticketPrice;
    std::cout << "Введіть статус квитка: ";
    std::cin.ignore();
    std::getline(std::cin, ticketStatus);
    Ticket ticket(ticketNum, qrCode, ticketPrice, ticketStatus);

    std::string viewerName, viewerBirth, viewerPhone, viewerEmail;
    std::cout << "\n--- Глядач ---\n";
    std::cout << "Введіть ПІБ глядача: ";
    std::getline(std::cin, viewerName);
    std::cout << "Введіть дату народження: ";
    std::getline(std::cin, viewerBirth);
    std::cout << "Введіть номер телефону: ";
    std::getline(std::cin, viewerPhone);
    std::cout << "Введіть електронну пошту: ";
    std::getline(std::cin, viewerEmail);
    Viewer viewer(viewerName, viewerBirth, viewerPhone, viewerEmail);

    std::string empId, empName;
    std::cout << "\n--- Контролер ---\n";
    std::cout << "Введіть ID працівника: ";
    std::getline(std::cin, empId);
    std::cout << "Введіть ПІБ контролера: ";
    std::getline(std::cin, empName);
    Controller controller(empId, empName);

    std::cout << "\n\n========================================\n";
    std::cout << "       РЕЗУЛЬТАТИ ВИКЛИКУ toString()      \n";
    std::cout << "========================================\n";
    std::cout << cinema.toString() << "\n";
    std::cout << movie.toString() << "\n";
    std::cout << hall.toString() << "\n";
    std::cout << session.toString() << "\n";
    std::cout << seat.toString() << "\n";
    std::cout << order.toString() << "\n";
    std::cout << ticket.toString() << "\n";
    std::cout << viewer.toString() << "\n";
    std::cout << controller.toString() << "\n";
    std::cout << "========================================\n";

    return 0;
}