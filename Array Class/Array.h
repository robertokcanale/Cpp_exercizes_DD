#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

class Array
{
    friend ostream &operator<<(ostream &, const Array &);
    friend istream &operator>>(istream &, Array &);

public:
    Array(int = 10); //constructor
    Array(const Array &);
    ~Array();

    int getSize() const;

    const Array &operator=(const Array &); //assignment operator
    bool operator==(const Array &) const; // equality operator

    //inequality operator
    bool operator!= (const Array &right) const
    {
        return !(*this == right);
    }

    int &operator[](int); //subscript operator for non const

    int operator[](int) const;

private:

    int size; //array
    int *ptr; //ptr to first element
};

#endif // ARRAY_H
