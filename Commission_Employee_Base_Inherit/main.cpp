#include <iostream>
#include <iomanip>
#include "BasePlus.h"
#include "Commission_Employee.h"

using namespace std;

int main()
{    // CHAPTER 20
     Base_Plus_Commission_Employee Sue("Sue", "Long", "222-222-222", 10000, 0.02, 500);


    //set floating-point putput formatting
    cout << fixed << setprecision(2);

    cout << "Employee by Get_Functions.\n" << "Name :" << Sue.Get_FirstName() << " " << Sue.Get_LastName()
    <<"\nSSN: "<< Sue.Get_SSNumber() << "\nGross Sales: " << Sue.Get_GrossSales()
    << "\nCommission Rate: "<< Sue.Get_CommissionRate()<< "\nBase Salary:"<< Sue.Get_BaseSalary() << endl;

    Sue.Set_BaseSalary(400);

    cout << "Sue Updated, printed by print function. \n"<< endl;

    Sue.print();

    cout<<"Sue Earned:"<< Sue.earnings();


    //CHAPTER 21

    Commission_Employee Com_Emp("John", "Jones", "111-11-1111", 600, 0.4); //initialize an object
    Commission_Employee *Com_EmpPtr=0;  //and its pointer

    Base_Plus_Commission_Employee BP("Lou", "Reed", "333-33-3333", 800, 0.6, 200);
    Base_Plus_Commission_Employee *BPPtr=0;

    cout << "\nBase-Class and Derived Class:\n\n";
    Com_Emp.print();
    cout << "\n\n";
    BP.print();

    //Assign pointers
    Com_EmpPtr = &Com_Emp;
    BPPtr = &BP;

    cout << "\nBase-Class Called Via Pointer (base_print):\n\n";
    Com_EmpPtr -> print();
    cout << "\n\nDerived-Class Called Via Pointer (derived_print):";
    BPPtr->print();


    //Rebase base class pointer to derived class and print
    /*!! WITHOUT virtual in front of earnings and print, then the Com_EmpPtr calls the BASE CLASS Print !!*/
    /*!! WITH virtual in front of earnings and print, then the Com_EmpPtr calls the DERIVED CLASS Print !!*/
    Com_EmpPtr = &BP;
    cout << "\n\nDerived-Class Called Via Base-Pointer (base_print):";
    Com_EmpPtr->print();
    cout << endl;

    //ok, as the base ptr has the same elements as the derived class
    double gross = Com_EmpPtr->Get_GrossSales();
    cout << "Gross Sales:"<< gross;

    //this greates an error, as Com_EmpPtr does not have the salary function of the derived class1
    //double salary = Com_EmpPtr ->Get_BaseSalary()

    return 0;
}
