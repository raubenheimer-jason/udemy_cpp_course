#include <iostream>
#include <cstring>
#include <cctype>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
    //       std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str)
{
    source.str = nullptr;
    //        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring()
{
    delete[] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    //    std::cout << "Using copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return in;
}

// overloaded == operator
bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(this->str, rhs.str) == 0); // could have just used: str instead of this->str
}

// overloaded != operator
bool Mystring::operator!=(const Mystring &rhs) const
{
    return (std::strcmp(this->str, rhs.str) != 0);
}

bool Mystring::operator<(const Mystring &rhs) const
{
    return (std::strcmp(this->str, rhs.str) < 0);
}

bool Mystring::operator>(const Mystring &rhs) const
{
    return (std::strcmp(this->str, rhs.str) > 0);
}

Mystring Mystring::operator-() const
{
    char *buff = new char[std::strlen(this->str) + 1];
    for (size_t i{}; i < std::strlen(buff); ++i)
        buff[i] = std::tolower(this->str[i]);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buff = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs)
{
    *this = *this + rhs;
    return *this;
}

Mystring Mystring::operator*(const int rhs) const
{
    Mystring temp;
    for (size_t i{}; i < rhs; ++i)
        temp += *this;
    return temp;

    // Old method before seeing solution vvv
    /*
    size_t len = std::strlen(this->str) * rhs + 1;
    char *buff = new char[len];
    std::strcpy(buff, this->str);
    for (size_t i{}; i < rhs - 1; ++i)
        std::strcat(buff, this->str);
    Mystring temp{buff};
    delete[] buff;
    return temp;
    */
}

Mystring &Mystring::operator*=(const int rhs)
{
    *this = *this * rhs;
    return *this;
}

// pre-increment
Mystring &Mystring::operator++()
{
    for (size_t i{}; i < std::strlen(this->str) + 1; ++i) // dont actually need the +1 becasue that's the null char
        this->str[i] = std::toupper(this->str[i]);
    return *this;
}

// post-increment
Mystring Mystring::operator++(int)
{
    // return ++*this; WRONG!! Need to return the old value for post-increment...
    Mystring temp{*this}; // save old value to return
    operator++();         // call pre-increment (changes the current Mystring object)
    return temp;          // return old value
}
