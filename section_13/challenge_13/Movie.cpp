#include <iostream>
#include "Movie.h"

// Constructor
Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {}

// Copy
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched} {}

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
