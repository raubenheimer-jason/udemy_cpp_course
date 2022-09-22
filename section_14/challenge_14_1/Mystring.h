#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <ostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source);      // Move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs);      // Move assignment

    bool operator==(const Mystring &rhs) const;    // equals
    bool operator!=(const Mystring &rhs) const;    // not equals
    bool operator<(const Mystring &rhs) const;     // less than
    bool operator>(const Mystring &rhs) const;     // greater than
    Mystring operator-() const;                    // make lowercase
    Mystring operator+(const Mystring &rhs) const; // concatenate
    Mystring &operator+=(const Mystring &rhs);     // concat and assign
    Mystring operator*(const int rhs) const;       // repeat rhs times
    Mystring &operator*=(const int rhs);           // repeat rhs times and assign
    Mystring &operator++();                        // pre-increment
    Mystring operator++(int);                      // post-increment

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_