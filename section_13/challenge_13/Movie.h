// #pragma once

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;

public:
    // Constructor
    Movie(std::string name, std::string rating, int watched);

    // Copy
    Movie(const Movie &souce);

    // Destructor
    ~Movie();

    // Public methods
    void display() const;
    // void increment_watched();
    void increment_watched() { ++watched; }
};

#endif // _MOVIE_H_