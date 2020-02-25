//file definition for the Time class

#define TIME_H

class Time {

public:

Time(int = 0, int = 0, int = 0); //  default constructor constructor

//set functions  //they used to be void, without &
//Now we have them return themselves! Through the THIS pointer-hence they need to be objects of type Time
Time &Set_Time(int, int, int);
Time &Set_Hour(int ); //set the hour after validation
Time &Set_Minute(int ); //set the hour after validation
Time &Set_Second(int ); //set the hour after validation

//get function
int get_Hour() const;
int get_Minute() const;
int get_Second() const;

//print functions
void Print_Universal() const;
void Print_Standard() const;

private:

//just private variables for the class;
int hour;
int minute;
int second;

};
