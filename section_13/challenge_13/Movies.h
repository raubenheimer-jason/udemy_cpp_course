// #pragma once

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> *movies_vec;

public:
    // Constructor
    Movies();

    // Copy
    Movies(const Movies &source);

    // Move
    Movies(Movies &&source);

    // Destructor
    ~Movies();

    // Public methods
    void display_movies() const;
    bool add_movie(const std::string name, const std::string rating, const int watched);
    bool increment_watched(const std::string name);
};

#endif // _MOVIES_H_