#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "string.h"
#include "Commission_Employee.h"

using namespace std;


class Base_Plus_Commission_Employee : public Commission_Employee
{
public:
    Base_Plus_Commission_Employee(const string &, const string &,const string &, double = 0.0, double = 0.0, double = 0.0);

    void Set_BaseSalary(double);
    double Get_BaseSalary() const;

    virtual double earnings() const;
    virtual void print() const;

private:
    double base_salary;

};

#endif // BASEPLUS_H


