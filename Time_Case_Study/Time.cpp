#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

//constructor
Time::Time(int h, int min, int sec){

Set_Time(h, min, sec);

}


//function por setting the time
void Time::Set_Time(int h, int min, int sec){

    //make proper boundary checks for the times
    if (( h >=0 && h <= 24) && (min >= 0 && min <= 60) && (sec >= 0 && sec <= 60)){

    hour = h;
    minute = min;
    second = sec;

        } else { throw
    invalid_argument("\nThe time provided is incorrect, as it does not respect the proper format" );
    }


}

//printing the time in HH:MM:SS AM or PM
void Time::Print_Standard(){

    cout << ((hour == 12 || hour == 0) ? 12 : hour % 12) << ":"  << setfill('0') << setw( 2 ) << minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");

}


//printing the time in HH:MM:SS
void Time::Print_Universal(){

    cout << setfill('0') << setw( 2 ) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;

}


int Time::getHour(){
    return hour;
}

//POOR PRACTICE, as from a public function it returns data to a private data member.
int &Time::bad_set_hour(int hr){

    if ( hr >=0 && hr <= 24 ){
        hour = hr;
    } else { throw
    invalid_argument("\nThe time provided is incorrect, as it does not respect the proper format" );
    }

    return hour; //bad reference return

}

