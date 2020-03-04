#include <iostream>
#include "Commission_Employee.h"
using namespace std;

//constructor
Commission_Employee::Commission_Employee(const string &first, const string &last, const string &ssn, double sales, double rate)
{
    first_name = first;
    last_name = last;
    SSN = ssn;
    gross_sales = sales;
    commission_rate = rate;
}

void Commission_Employee::Set_FirstName(const string &first)
{
    first_name = first;
}
string Commission_Employee::Get_FirstName() const
{
    return first_name;
}

void Commission_Employee::Set_LastName(const string &last)
{
    last_name = last;
}
string Commission_Employee::Get_LastName() const
{
    return last_name;
}

void Commission_Employee::Set_SSnumber(const string &ssn)
{
    SSN = ssn;
}
string Commission_Employee::Get_SSNumber() const
{
    return SSN;
}

void Commission_Employee::Set_GrossSales(double sales)
{
    if(sales  >= 0)
    {
        gross_sales = sales;
    }
    else
    {
        throw invalid_argument("Gross sales must be bigger than 0.\n");
    }
}
double Commission_Employee::Get_GrossSales() const
{
    return gross_sales;
}

void Commission_Employee::Set_CommissionRate(double rate)
{
    if(rate  >= 0 && rate <= 1)
    {
        commission_rate = rate;
    }
    else
    {
        throw invalid_argument("Rate must be between 0 and 1.\n");

    }
}

double Commission_Employee::Get_CommissionRate() const
{
    return commission_rate;
}

//calculate earinings
double Commission_Employee::earnings() const
{
    return gross_sales * commission_rate;
}



void Commission_Employee::print() const
{
    cout << "Employee:" << first_name << " " << last_name
         << "\nSSN: "<< SSN << "\nGross Sales: " << gross_sales
         << "\nCommission Rate: "<< commission_rate<< endl;
}
