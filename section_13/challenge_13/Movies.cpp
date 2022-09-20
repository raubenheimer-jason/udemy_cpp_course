#include <iostream>
#include "Movies.h"

// Constructor
Movies::Movies() {}

// // Copy
// Movies::Movies(const Movies::Movies &source) {}

// Destructor
Movies::~Movies()
{
    std::cout << "movies destructor" << std::endl;
}

// Public methods
void Movies::display_movies() const
{
    std::cout << "=====================" << std::endl;
    if (movies_vec.size() == 0)
        std::cout << "No movies in vector." << std::endl;
    else
        for (const auto &movie : movies_vec)
            // movie.display();
            std::cout << "movie display" << std::endl;
    std::cout << "=====================" << std::endl;
}
