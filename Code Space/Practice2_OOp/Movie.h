#ifndef Movie_h
#define Movie_h

#include <string>

class Movie {
private:
    std::string title;
    int ageRestriction;
    int durationMinutes;
    std::string genre;

public:
    Movie(std::string title, int ageRestriction, int durationMinutes, std::string genre)
        : title(title), ageRestriction(ageRestriction), durationMinutes(durationMinutes), genre(genre) {}

    void provideDetails() {}

    std::string toString() const {
        return "Фільм: [Назва: " + title + ", Вікове обмеження: " + std::to_string(ageRestriction) + 
               "+, Тривалість: " + std::to_string(durationMinutes) + " хв, Жанр: " + genre + "]";
    }
};

#endif