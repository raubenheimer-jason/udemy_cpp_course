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
void add_movie(Movies &my_movies, const std::string name, const std::string rating);

int main()
{
    Movies my_movies;

    my_movies.display_movies();

    add_movie(my_movies, "Shrek", "PG");

    add_movie(my_movies, "Shrek", "PG");

    my_movies.display_movies();

    return 0;
}

void add_movie(Movies &my_movies, const std::string name, const std::string rating)
{
    std::cout << name << " ";
    if (my_movies.add_movie(name, rating))
        std::cout << "added." << std::endl;
    else
        std::cout << "already exists." << std::endl;
    // std::cout << std::endl;
}