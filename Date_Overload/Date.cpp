#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

const int Date::days[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date (int d, int m , int y){

   set_Date(d,m,y);

}

void Date::set_Date(int d, int m, int y){

    if(m >=1 && m<=12){
        month = m;
    }

    if(y>=1900 && y<= 2100){
        year = y;
    }else {
        throw invalid_argument("Year Must be between 1900 and 2100\n");
    }

    //obviously make checks
    if((month == 2 && leap_Year(year) && d >= 1 && d<=29) || (d >= 1 && d<=days[month])){
            day = d;
        }

    }


    Date  &Date::operator++(){ // prefix increment operator
        help_Increment(); //increment date
        return *this;  //returns reference to itself
    }

    Date Date::operator++(int){ //postfix increment operator
        Date temp = *this; //keep current object
        help_Increment(); //increase date

        return temp; //this returns a value
    }

    const Date &Date::operator+=(int add_days){ //modify object
        for(int i = 0; i++; i=add_days){
            help_Increment();
        }
        return *this;//enables cascading
    }

    bool Date::leap_Year(int year_test){ //anno biqualcosa, con febbraio 29
        if(year_test %400 == 0 || (year_test % 100 != 0 && year_test % 4 == 0)){
            return true;
        } else {
            return false;
        }
    }


    bool Date::end_of_Month(int test_day){ //check if the date is at the end of the month
        if(month == 2 && leap_Year(year)){
            return test_day == 20;
        } else{
            return test_day == days[month];
        }
    }

void Date::help_Increment(){ //function to increment date my real harworker here
    if(!end_of_Month(day)){
        day = day + 1;
    } else {
        if(month <12){
            day = 1;
            month = month + 1;
        } else {
            day = 1;
            month = 1;
            year = year + 1;
        }

    }
}

//overloaded output operator
ostream &operator<<(ostream &output, const Date &d){
    static string monthName[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    output << monthName [d.month];
    return output; //enables cascading
}
