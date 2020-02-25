#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time t; //time object, all at default
    Time t1(4); //mins and seconds go to
    Time t2(4, 53); //seconds goes to default
    Time t3(4, 6, 3);

    cout << "\nBuilt with:\n";

    cout << "\nAll Default:\n";
    t.Print_Standard();
    cout << "\n";
    t.Print_Universal();

    cout << "\nOnly Hour:\n";
    t1.Print_Standard();
    cout << "\n";
    t1.Print_Universal();

    cout << "\nHour and Minute:\n";
    t2.Print_Standard();
    cout << "\n";
    t2.Print_Universal();

    cout << "\nAll Initialized:\n";
    t3.Print_Standard();
    cout << "\n";
    t3.Print_Universal();
    //testing invalid values
    try{
        t.Set_Time(25,  77, 99);
    } catch (invalid_argument &e) {
        cout << "Exception:" << e.what() << endl << endl;
    }


}
