#ifndef COMMISSION_EMPLOYEE_H
#define COMMISSION_EMPLOYEE_H
#include "string.h"


using namespace std;

class Commission_Employee
{
public:

    Commission_Employee(const string &, const string &, const string &, double, double);

    void Set_FirstName(const string &);
    string Get_FirstName() const;

    void Set_LastName(const string &);
    string Get_LastName() const;

    void Set_SSnumber(const string &);
    string Get_SSNumber() const;

    void Set_GrossSales(double);
    double Get_GrossSales() const;

    void Set_CommissionRate(double);
    double Get_CommissionRate() const;

    virtual double earnings() const; //calculate earinings
    virtual void print() const;

protected:
    string SSN;
    string first_name;
    string last_name;
    double gross_sales;
    double commission_rate;
};


#endif
