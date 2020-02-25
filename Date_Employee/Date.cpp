#include <iostream>
#include "Date.h"
using namespace std;

Date::Date (int d, int m , int y){


    //month check
    if(m > 0 && m <= months_per_year){
        month = m;
        } else
        {
            throw invalid_argument("Months is invalid, should be between 0 and 12");
        }
    //day check
    day = check_day(d);
    year = y;

    cout <<"\nNew Date is:"; print_date();
    cout << endl;
}



void Date::print_date() const { //just printing the date

    cout << day <<"/" << month << "/" << year <<endl;

}

Date::~Date(){ //building a destructor here

    cout << "\nDestructed Date is:";
    print_date();
    cout << endl;

}

//utility function to check the proper date
int Date::check_day(int test_day ) const {

    //testing the day month by mont
    static const int days_per_month[1 + months_per_year] =
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


   if (test_day > 0 && test_day <= days_per_month[month]){
           return test_day; //return the tested day
        } else
        {
            throw invalid_argument("Day should be between ");
        }
    //check for February 29th

    if( month==2 && test_day==29 && (year%400 == 0  || (year % 4 == 0 && year % 100 != 0 ))){
           return test_day; //return the tested day
        } else
        {
            throw invalid_argument("Day should be between ");
        }

}




