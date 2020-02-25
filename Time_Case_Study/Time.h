//file definition for the Time class

//prevent multiple header inclusions
#define TIME_H

class Time {

public:

Time(int = 0, int = 0, int = 0); // constructor

void Set_Time(int , int , int );

int &bad_set_hour(int); //doing stuff through reference could be dangerous.

int getHour();

void Print_Universal();

void Print_Standard();

private:

//just private variables for the class;
int hour;
int minute;
int second;

};
