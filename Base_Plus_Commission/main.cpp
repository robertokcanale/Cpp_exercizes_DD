#include <iostream>
#include <iomanip>
#include "Base_Plus_Commission_Employee.h"
using namespace std;

int main()
{
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

    return 0;
}
