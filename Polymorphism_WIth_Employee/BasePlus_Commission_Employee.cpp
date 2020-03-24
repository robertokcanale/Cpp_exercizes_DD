#include <iostream>
#include "BasePlus.h"
using namespace std;


Base_Plus_Commission_Employee::Base_Plus_Commission_Employee(const string &first, const string &last, const string &ssn, double sales, double rate, double salary)
    : Commission_Employee(first, last, ssn, sales, rate)   //explicitly calling the inherited constructor
{

    Set_BaseSalary(salary);
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


double Base_Plus_Commission_Employee::earnings() const
{
    //here we will have an error, as the DERIVED CLASS cannot acces the PRIVATE DATA of the previous class
    return Get_BaseSalary() + Commission_Employee::earnings();
}



void Base_Plus_Commission_Employee::print() const
{
    cout << "Base Salaried";
    Commission_Employee::print();
    cout << "Base Salary: " << Get_BaseSalary()<< endl;
}
