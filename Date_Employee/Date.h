#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const int months_per_year = 12; //constant for dates

    Date (int = 1, int = 1 , int = 2000); // constructor
    void print_date() const; //standard print
    ~Date();

private:

    int day;
    int month;
    int year;

    int check_day(int) const;

};

#endif
