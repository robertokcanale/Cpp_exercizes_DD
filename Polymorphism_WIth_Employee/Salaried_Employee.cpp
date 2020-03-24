#include <iostream>
#include "Salaried_Employee.h"
using namespace std;

//constructor
Salaried_Employee::Salaried_Employee(const string &first, const string &last, const string &ssn, double salary)
    : Employee (first, last, ssn)
{
    Set_weekly_salary( salary);
}

void Salaried_Employee::Set_weekly_salary(double salary)
{
    if(salary  >= 0)
    {
        weekly_salary = salary;
    }
    else
    {
        throw invalid_argument("Salary must be bigger than 0.\n");
    }
}

double Salaried_Employee::Get_weekly_salary() const
{
    return weekly_salary;
}

//calculate earinings
double Salaried_Employee::earnings() const
{
    return Get_weekly_salary();
}

void Salaried_Employee::print() const
{
    cout << "Salaried: ";
    Employee::print();
    cout << "\nSalary: " << Get_weekly_salary() << endl;
}


