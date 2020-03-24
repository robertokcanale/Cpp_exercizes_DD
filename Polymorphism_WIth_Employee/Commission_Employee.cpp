#include <iostream>
#include "Commission_Employee.h"
using namespace std;

//constructor
Commission_Employee::Commission_Employee(const string &first, const string &last, const string &ssn, double sales, double rate)
    : Employee(first, last, ssn)
{
    Set_GrossSales(sales);
    Set_CommissionRate(rate);

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
    return Get_CommissionRate() * Get_GrossSales();
}


void Commission_Employee::print() const
{
    cout << "Commission ";
    Employee::print();
    cout << "Gross Sales: " << Get_GrossSales()
         << "\nCommission Rate: "<< Get_CommissionRate()<< endl;
}

