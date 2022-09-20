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

int main()
{
    Movies my_movies;

    return 0;
}