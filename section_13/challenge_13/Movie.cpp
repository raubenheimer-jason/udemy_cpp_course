#include <iostream>
#include "Movie.h"

// Constructor
Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {}

// Copy
Movie::Movie(const Movie &souce)
    : Movie{souce.name, souce.rating, souce.watched} {}

// Destructor
Movie::~Movie() {}

// Public methods
void Movie::display() const
{
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}

std::string Movie::get_name() const
{
    return name;
}
