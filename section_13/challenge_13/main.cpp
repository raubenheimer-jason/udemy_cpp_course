// video 156
// Section 13 challenge

//! need to compile all cpp files...
// g++ .\main.cpp .\Movie.cpp .\Movies.cpp

// Making vscode compile multiple files
// https://youtu.be/8IWFeUkZ4bo

// edited tasks.json args...
/*
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe build active file",
            "command": "C:\\msys64\\mingw64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                // "${file}",
                "${fileDirname}\\*.cpp",
                "${fileDirname}\\*.h",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
*/

#include <iostream>
#include "Movies.h"

// function prototypes
void add_movie(Movies &my_movies, const std::string name, const std::string rating, const int watched);
void increment_watched(Movies &my_movies, const std::string name);

int main()
{
    Movies my_movies;

    my_movies.display_movies();

    add_movie(my_movies, "Big", "PG-13", 2);     // OK
    add_movie(my_movies, "Star Wars", "PG", 5);  // OK
    add_movie(my_movies, "Cinderella", "PG", 7); // OK

    my_movies.display_movies(); // Big, Star Wars, Cinderella

    add_movie(my_movies, "Cinderella", "PG", 7); // Already exists
    add_movie(my_movies, "Ice Age", "PG", 12);   // OK

    my_movies.display_movies(); // Big, Star Wars, Cinderella, Ice Age

    increment_watched(my_movies, "Big");     // OK
    increment_watched(my_movies, "Ice Age"); // OK

    my_movies.display_movies(); // Big and Ice Age watched count incremented by 1

    increment_watched(my_movies, "XXX"); // XXX not found
    return 0;
}

void add_movie(Movies &my_movies, const std::string name, const std::string rating, const int watched)
{
    std::cout << name << " ";
    if (my_movies.add_movie(name, rating, watched))
        std::cout << "added." << std::endl;
    else
        std::cout << "already exists." << std::endl;
}

void increment_watched(Movies &my_movies, const std::string name)
{
    std::cout << name << " watch count ";
    if (my_movies.increment_watched(name))
        std::cout << "incremented." << std::endl;
    else
        std::cout << "not incremented. Movie doesn't exist." << std::endl;
}