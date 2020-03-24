#ifndef SALARIED_H
#define SALARIED_H
#include "Employee.h"

//deifining salaried employee from the base class employee
class Salaried_Employee : public Employee
{
public:
    Salaried_Employee(const string &, const string &, const string &, double = 0.0);

    void Set_weekly_salary(double);
    double Get_weekly_salary() const;

    virtual double earnings() const; //calculate earinings
    virtual void print() const;

private:
    double weekly_salary;

};

#endif // SALARIED_H
