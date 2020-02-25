#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time t; //time object

    //initialize by reference
    int &hourRef = t.bad_set_hour(20);

    cout << "\n Valid hour before DANGEROUS CHANGE:" << hourRef;

    //tou can directly change it like this
    hourRef = 30;

    cout << "\n Invalid hour after DANGEROUS CHANGE:" << t.getHour();
    t.bad_set_hour(12) =74; //bad assignment

    cout << "\n BAD PROGRAMMING PRACTICE \n" << "t.bad_set_hour (12) as a lvalue, invalid hour   " << t.getHour()<< "  Yet. With the reference we get around it." << endl;


    cout << "Universal time is:";
    t.Print_Universal();

    cout << "\nStandard time is:";
    t.Print_Standard();

    t.Set_Time(13, 27, 55);

    cout << "\nUniversal time after SetTime is:";
    t.Print_Universal();

    cout << "\nStandard time after SetTime is:";
    t.Print_Standard();

    //testing invalid values
    try{
        t.Set_Time(25,  77, 99);
    } catch (invalid_argument &e) {
        cout << "Exception:" << e.what() << endl << endl;
    }


}
