#include <iostream>
#include "Employee.h"

using namespace std;

//constructor
Employee::Employee(const string &first, const string &last, const string &ssn)
    :first_name(first), last_name(last), SSN(ssn)
{

}

void Employee::Set_FirstName(const string &first)
{
    first_name = first;
}
string Employee::Get_FirstName() const
{
    return first_name;
}

void Employee::Set_LastName(const string &last)
{
    last_name = last;
}
string Employee::Get_LastName() const
{
    return last_name;
}

void Employee::Set_SSnumber(const string &ssn)
{
    SSN = ssn;
}

string Employee::Get_SSNumber() const
{
    return SSN;
}

void Employee::print() const
{
    cout << "Employee:" << first_name << " " << last_name
         << "\nSSN: "<< SSN;
}
