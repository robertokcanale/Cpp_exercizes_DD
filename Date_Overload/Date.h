#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {

friend ostream &operator << (ostream &, const Date &);

public:
    Date (int = 1, int = 1 , int = 1900); //constructor
    void set_Date(int, int, int);
    Date &operator++(); // prefix increment operator
    Date operator++(int); //postfix increment operator
    const Date &operator+=( int ); //modify objet
    static bool leap_Year(int); //anno biqualcosa, con febbraio 29
    bool end_of_Month(int); //check if the date is at the end of the month

private:

int day;
int month;
int year;

static const int days[];
void help_Increment(); //function to increment date

};

#endif
