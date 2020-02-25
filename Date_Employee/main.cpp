#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Date birth1( 23, 7, 1995);
    Date hire1(12 , 4, 2035);
    Date birth2( 11, 9, 1985);
    Date hire2(21, 10, 2045);
    Date birth3( 10, 7, 1935);
    Date hire3(1,6, 2005);
    cout << "Total Employees before calling a constructor:" << Employee::get_count() << endl;

    Employee manager("Bob", "Ross", birth1, hire1);
    cout<< endl;

    manager.print_info();

    Employee e1("Angela", "Krump", birth2, hire2);
    Employee e2("Limerik", "Van Kruger", birth2, hire2);
    e1.print_info();
    e2.print_info();

    cout << "Total Employees after calling a constructor:" << Employee::get_count() << endl;

}
