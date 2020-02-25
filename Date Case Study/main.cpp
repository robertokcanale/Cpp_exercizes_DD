#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date d1(4, 7 , 2003);
    Date d2;

    cout << "date1 = ";
    d1.print_date();

    cout << "date2 = ";
    d2.print_date();

    d2 = d1;

    cout <<"\n \n After defaul memberwise assignment, date2 = ";
    d2.print_date();
}
