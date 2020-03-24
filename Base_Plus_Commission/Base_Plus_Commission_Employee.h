#ifndef BASE_PLUS_COMMISSION_EMPLOYEE_H
#define BASE_PLUS_COMMISSION_EMPLOYEE_H
#include "string.h"


using namespace std;

class Base_Plus_Commission_Employee
{
public:

    Base_Plus_Commission_Employee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);

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

    void Set_BaseSalary(double);
    double Get_BaseSalary() const;

    double earnings() const; //calculate earinings
    void print() const;

private:
    string SSN;
    string first_name;
    string last_name;
    double gross_sales;
    double commission_rate;
    double base_salary;
};


#endif
