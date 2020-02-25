#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

//constructor
Time::Time(int hour, int minute, int second){ //this way sets eerying to 0

Set_Time( hour, minute, second);

}


//function por setting the time
void Time::Set_Time(int h, int min, int sec){

  Set_Hour(h);
  Set_Minute(min);
  Set_Second(sec);

}


void Time::Set_Hour(int h){

    if ( h >=0 && h <= 24){
    hour = h;
    } else { throw
    invalid_argument("\nHour provided is incorrect, has to be between 0-23" );
    }

} //set the hour after validation
void Time::Set_Minute(int min){

    if (min >= 0 && min <= 60){
    minute = min;
    } else { throw
    invalid_argument("\nMinute provided is incorrect, has to be between 0-59" );
    }

} //set the hour after validation
void Time::Set_Second(int sec){

    if (sec >= 0 && sec <= 60){
    second = sec;
    } else { throw
    invalid_argument("\nSecond provided is incorrect, has to be between 0-59" );
    }

} //set the hour after validation

//get function
int Time::get_Hour(){
    return hour;
}
int Time::get_Minute(){
    return minute;
}
int Time::get_Second(){
    return second;
}


//printing the time in HH:MM:SS AM or PM
void Time::Print_Standard(){

    cout << ((hour == 12 || hour == 0) ? 12 : hour % 12) << ":"  << setfill('0') << setw( 2 ) << minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");

}


//printing the time in HH:MM:SS
void Time::Print_Universal(){

    cout << setfill('0') << setw( 2 ) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;

}

