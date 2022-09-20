#include <iostream>
#include "Movies.h"

// Constructor
Movies::Movies() {}

// Destructor
Movies::~Movies() {}

// Public methods
void Movies::display_movies() const
{
    std::cout << "\n====== Display Movies ======" << std::endl;
    if (movies_vec.size() == 0)
        std::cout << "No movies in vector." << std::endl;
    else
        for (const auto &movie : movies_vec)
            movie.display();
    std::cout << std::endl;
}

bool Movies::add_movie(const std::string name, const std::string rating, const int watched)
{
    // first check if movie has already been added...
    for (const auto &movie : movies_vec)
        if (movie.get_name() == name)
            return false;

    // if we havent returned, then movie hasnt already been added
    // add movie
    movies_vec.push_back(Movie{name, rating, watched});
    return true;
}

bool Movies::increment_watched(const std::string name)
{
    for (auto &movie : movies_vec)
        if (movie.get_name() == name)
        {
            movie.increment_watched();
            return true;
        }

    return false;
}
