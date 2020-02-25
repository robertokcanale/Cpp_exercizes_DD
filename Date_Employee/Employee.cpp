#include <iostream>
#include "Date.h"
#include "Employee.h"
using namespace std;

int Employee::total_count = 0; // initializing the number of employees to 0;


Employee::Employee(const string &name, const string &surname, const Date & birthday, const Date &hireday)
:first_name(name), last_name(surname), birth_date(birthday), hire_date(hireday) //initialize all parameters! considering the arguments passed to the function
{
cout<<"Created New Entry:";
print_info();
cout<< endl;

total_count = total_count + 1;

}

void Employee::print_info(){

    cout << "Employee: " << first_name << "," << last_name<< endl;
    cout << "Birth date:";
    birth_date.print_date(); //here we can call function of the Date struct that is part of Employee!
    cout << endl;
    cout << "Employment date:";
    hire_date.print_date();  //here we can call function of the Date struct that is part of Employee!

}


Employee::~Employee(){
cout<< "Destroyed Entry:";
print_info();
cout<< endl;

total_count = total_count - 1; //reducing the total number of employees

}


string Employee::get_first_name() const{
    return Employee::first_name;
}


string Employee::get_last_name() const{
    return Employee::last_name;
}


int Employee::get_count(){
    return total_count;
}
