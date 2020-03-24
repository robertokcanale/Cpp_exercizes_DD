#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "Salaried_Employee.h"
#include "BasePlus.h"
#include "Commission_Employee.h"

void virtual_via_pointer(const Employee* const);
void virtual_via_reference(const Employee &);


using namespace std;

int main()
{

cout << fixed << setprecision(2);

//create 3 derived objects

Salaried_Employee salaried_e("John", "Smith", "666-33-777", 900);
Commission_Employee commissioned_e("Li", "Zhang", "444-22-555", 7000, 0.3);
Base_Plus_Commission_Employee base_commissioned_e("Sue", "Long", "222-22-222", 10000, 0.02, 500);

cout << "Employess processed individually with static binding: \n\n";

salaried_e.print(); cout << "Earned: " << salaried_e.earnings() << "\n\n";
commissioned_e.print(); cout << "Earned: " << commissioned_e.earnings() << "\n\n";
base_commissioned_e.print(); cout << "Earned: " << base_commissioned_e.earnings() << "\n\n";



//create a vector of 3 base_class pointers and intialize it

vector <Employee *> employees(3);
employees[0] = &salaried_e;
employees[1] = &commissioned_e;
employees[2] = &base_commissioned_e;

cout << "Employess processed polymorphically with dynamic binding.\n\n";
cout << "Virtual finction calls made of base-class via pointers: \n\n";

for (int i=0; i<employees.size(); ++i){
    virtual_via_pointer(employees[i]);
}

cout << "Virtual finction calls made of base-class via reference: \n\n";

for (int i=0; i<employees.size(); ++i){
    virtual_via_reference(*employees[i]);
}

 return 0;
}




void virtual_via_pointer(const Employee* const base_ptr)
{
    base_ptr->print();
    cout << "Earned: " << base_ptr->earnings() << "\n\n";
}

void virtual_via_reference(const Employee &base_ptr)
{
        base_ptr.print();
    cout << "Earned: " << base_ptr.earnings() << "\n\n";
}
