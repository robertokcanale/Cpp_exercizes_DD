#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "string.h"

using namespace std;

class Employee
{

public:
    Employee(const string &, const string &, const string &);

    void Set_FirstName(const string &);
    string Get_FirstName() const;

    void Set_LastName(const string &);
    string Get_LastName() const;

    void Set_SSnumber(const string &);
    string Get_SSNumber() const;

    //pure virtual function makes the Employee an abstract base class
    virtual double earnings() const = 0; //calculate earinings
    virtual void print() const;

private:
    string SSN;
    string first_name;
    string last_name;
};

#endif
