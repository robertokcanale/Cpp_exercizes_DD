//file definition for the Time class

#define TIME_H

class Time {

public:

Time(int = 0, int = 0, int = 0); //  default constructor constructor

//set functions
void Set_Time(int, int, int);
void Set_Hour(int ); //set the hour after validation
void Set_Minute(int ); //set the hour after validation
void Set_Second(int ); //set the hour after validation

//get function
int get_Hour();
int get_Minute();
int get_Second();

//print functions
void Print_Universal();
void Print_Standard();

private:

//just private variables for the class;
int hour;
int minute;
int second;

};
