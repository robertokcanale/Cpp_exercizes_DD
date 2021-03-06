#include <iostream>
#include "Base_Plus_Commission_Employee.h"
using namespace std;

//constructor
Base_Plus_Commission_Employee::Base_Plus_Commission_Employee(const string &first, const string &last, const string &ssn, double sales, double rate, double salary)
{
    first_name = first;
    last_name = last;
    SSN = ssn;
    Set_GrossSales(sales);
    Set_CommissionRate(rate);
    Set_BaseSalary(salary);
}

void Base_Plus_Commission_Employee::Set_FirstName(const string &first)
{
    first_name = first;
}

string Base_Plus_Commission_Employee::Get_FirstName() const
{
    return first_name;
}

void Base_Plus_Commission_Employee::Set_LastName(const string &last)
{
    last_name = last;
}

string Base_Plus_Commission_Employee::Get_LastName() const
{
    return last_name;
}

void Base_Plus_Commission_Employee::Set_SSnumber(const string &ssn)
{
    SSN = ssn;
}

string Base_Plus_Commission_Employee::Get_SSNumber() const
{
    return SSN;
}

void Base_Plus_Commission_Employee::Set_GrossSales(double sales)
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
double Base_Plus_Commission_Employee::Get_GrossSales() const
{
    return gross_sales;
}

void Base_Plus_Commission_Employee::Set_CommissionRate(double rate)
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

double Base_Plus_Commission_Employee::Get_CommissionRate() const
{
    return commission_rate;
}

void Base_Plus_Commission_Employee::Set_BaseSalary(double salary)
{
    if(salary  >= 0.0 )
    {
        base_salary = salary;
    }
    else
    {
        throw invalid_argument("Salary must be bigger than 0.0 .\n");

    }
}

double Base_Plus_Commission_Employee::Get_BaseSalary() const
{
    return base_salary;
}



//calculate earinings
double Base_Plus_Commission_Employee::earnings() const
{
    return base_salary + (gross_sales * commission_rate);
}



void Base_Plus_Commission_Employee::print() const
{
    cout << "Base Salaried Commission Employee:" << first_name << " " << last_name
         << "\nSSN: "<< SSN << "\nGross Sales: " << gross_sales
         << "\nCommission Rate: "<< commission_rate<<
         "\nBase Salary: " << base_salary << endl;
}
