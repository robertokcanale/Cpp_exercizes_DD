#include <iostream>
#include <iomanip>
#include "Commission_Employee.h"

using namespace std;

int main()
{
    Commission_Employee Sue("Sue", "Long", "222-222-222", 10000, 0.02);

    //set floating-point putput formatting
    cout << fixed << setprecision(2);

    cout << "Employee by Get_Functions.\n" << "Name :" << Sue.Get_FirstName() << " " << Sue.Get_LastName()
    <<"\nSSN: "<< Sue.Get_SSNumber() << "\nGross Sales: " << Sue.Get_GrossSales()
    << "\nCommission Rate: "<< Sue.Get_CommissionRate()<< endl;

    Sue.Set_GrossSales(2090);
    Sue.Set_CommissionRate(0.05);

    cout << "Sue Updated, printed by print function. \n"<< endl;

    Sue.print();

    cout<<"Sue Earned:"<< Sue.earnings();

    return 0;
}
