#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Array.h"

using namespace std;


Array::Array(int array_size)  //constructor
{
    if (array_size > 0)
    {
        size = array_size;
    }
    else
    {
        throw invalid_argument("Array size needs to be bigger than 0. \n");
    }

    ptr = new int[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = 0;
    }

}

//to copy an array!
Array::Array(const Array &array_to_copy):size(array_to_copy.size)
{
    ptr = new int[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = array_to_copy[i];
    }

}

Array::~Array()
{
    delete [] ptr;
}

int Array::getSize() const
{
    return size;
}

const Array &Array::operator=(const Array &right)  //assignment operator
{

    if (&right != this)
    {
        //check the size. I not equal, deallocate original and allocate new = right
        if( size != right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for(int i = 0; i<size; i++)
        {
            ptr[i]= right.ptr[i];
        }
    }
    return *this;
}

bool Array::operator==(const Array &right) const  // equality operator, first check if same size, the check if same things inside
{
    if (size != right.size)
    {
        return false;
    }
    for(int i=0; i< size; i++)
    {
        if(ptr[i] != right.ptr[i])
        {
            return false;
        }
    }
    return true; //else return equal
}


//reference return to create a modifyable value
int &Array::operator[](int subscript)  //subscript operator for non const
{
    if (subscript < 0 || subscript>= size)
    {
        throw out_of_range("Subscript out of range.\n");
    }
    return ptr[subscript];
}

int Array::operator[](int subscript) const  //subscript operator for const
{
    if (subscript < 0 || subscript>= size)
    {
        throw out_of_range("Subscript out of range.\n");
    }
    return ptr[subscript];
}


istream &operator>>(istream &input, Array &a)
{

    for(int i=0; i< a.size; i++)
    {
        input >> a.ptr[i];
    }
    return input;
}


ostream &operator<<(ostream &output, const Array &a)
{
    int i;

    for (i=0; i<a.size; i++ )
    {

        output<<setw(12) << a.ptr[i];

        if((i+1)%4==0)
        {
            output << endl;
        }

    }
    if(i % 4 != 0)
    {
        output << endl;
    }
    return output;
}
