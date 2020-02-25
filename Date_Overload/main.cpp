#include <iostream>


#include "Date.h"
using namespace std;

int main()
{
    Date d1(12,4, 2030);
    Date d2; //default;


    cout << "d1 is " << d1 << "\nd2 is " << d2 << endl;
    cout << "\n\n d1+7="<< (d1 += 7);

    d2.set_Date(28, 2, 2008);
    cout << "\nd2 is" << d2 << endl;

    cout << "\n++d2 is " << ++d2<< " Leap year allows it." << endl;
    cout<< "\nd2++ is " << d2++ << " Leap year allows it. " << endl;

    return 0;
}
