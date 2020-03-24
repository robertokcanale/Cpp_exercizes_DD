#ifndef COMMISSION_EMPLOYEE_H
#define COMMISSION_EMPLOYEE_H
#include "Employee.h"
#include "string.h"

using namespace std;

class Commission_Employee : public Employee
{
public:

    Commission_Employee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void Set_GrossSales(double);
    double Get_GrossSales() const;

    void Set_CommissionRate(double);
    double Get_CommissionRate() const;

    virtual double earnings() const; //calculate earinings
    virtual void print() const;

private:
    double gross_sales;
    double commission_rate;
};


#endif
