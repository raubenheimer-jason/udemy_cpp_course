// #pragma once

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> movies_vec;

public:
    // Constructor
    Movies();

    // Destructor
    ~Movies();

    // Public methods
    void display_movies() const;
    bool add_movie(std::string name, std::string rating);
};

#endif // _MOVIES_H_