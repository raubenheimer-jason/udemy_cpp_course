#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <ostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &obj, const Mystring &rhs);
    friend Mystring &operator+=(Mystring &obj, const Mystring &rhs);
    friend Mystring operator*(const Mystring &obj, const int n);
    friend Mystring &operator*=(Mystring &obj, const int n);
    friend Mystring &operator++(Mystring &obj);      // pre-increment
    friend Mystring operator++(Mystring &obj, int); // post-increment

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

    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_