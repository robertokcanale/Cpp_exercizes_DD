#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    Array integers1(7); // 7 elements
    Array integers2; //10 elements by default

    cout << "Size of integers1:" << integers1.getSize()<< "\nArray:" << integers1<< endl;
    cout << "Size of integers2:" << integers2.getSize()<< "\nArray:" << integers2 << endl;

    cout << "Fill them with 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nintegers1:\n" << integers1<< "integers2: \n" << integers2;


    cout << "\nEvaluating Overloaded Inequality operator !=" << endl;
    if(integers1 != integers2)
    {
        cout << "\nThey are not equal!"<<endl;
    }

    //initiaized 3 as equal to 1
    Array integers3(integers1);

    cout << "Size of integers3:" << integers3.getSize()<< "\nArray:" << integers3<< endl;

    cout << "Assigning integers 2 to integers1" << endl;

    integers1 = integers2;
    cout << "\nintegers1:\n" << integers1<< "integers2: \n" << integers2;

    cout << "\nEvaluating Overloaded Equality operator !=" << endl;
    if(integers1 == integers2)
    {
        cout << "\nThey are equal!\n"<<endl;
    }

    //using overloadd sibscript operate to create lvalue

    cout << "Integers1[5] is " << integers1[5] << endl;

    integers1[5] = 1000;
    cout << "Integers1[5] assigned = 1000: \n"<< integers1;

    try
    {
        cout << "Integers1[15] assigned = 1000: \n"<< endl,
             integers1[15] = 1000; //ERROR
    }
    catch (out_of_range &ex)
    {
        cout << "Exception occurred!"<< ex.what() << endl;
    }

}
