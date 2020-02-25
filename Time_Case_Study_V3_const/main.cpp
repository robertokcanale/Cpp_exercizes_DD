#include <iostream>
#include "Time.h"

using namespace std;

//

int main()
{
    Time wake_up; //of course, not constsnt
    //const Time noon(12, 0, 0); // noon is constant
    //PART ON THIS POINTER

    //cascaded function calls
    wake_up.Set_Hour(7).Set_Minute(30).Set_Second(00); // Uses CASCADING each of the .call RETURNS a class of type Time!
    //every "iteration from left to right, it is seen as a wake_up.call again. SO, in this case, ORDER DOESNT MATTER

    //putput time in universal and standard formats
    cout << "Universal:";
    wake_up.Print_Universal();
    cout << endl;

    cout << "Standard:";
    wake_up.Print_Standard();
    cout << endl;
    cout << "New Standard:";
    //supercascaded
    wake_up.Set_Time(8, 40, 0).Print_Standard(); //like before, it uses CASCADING. We can see that however,
    //that Print.Standard doesnt return a Time type, so now ORDER MATTERS! We have to place it last.

    //PART ON CONST
    //now we make some operations to see the difference between const and
    //non-const operators, as well as classes

    /*                        //OBJECT    MEMBER FUNCTION
    wake_up.Set_Hour(18); //non const non const
    noon.Set_Hour(12);    //const     nonconst
    //right so, it doesnt work!

    wake_up.get_Hour();    //non const const

    noon.get_Minute();    //const     const

    noon.Print_Universal();//const     const

    noon.Print_Standard(); //const     non-const
    */
}
