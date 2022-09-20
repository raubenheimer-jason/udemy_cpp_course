// #pragma once

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> movies_vec;

public:
    // Constructor
    Movies();

    // // Copy
    // Movies(const Movies &source);

    // Destructor
    ~Movies();

    // Public methods
    void display_movies() const;
};

#endif // _MOVIES_H_