#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

    GradeBook::GradeBook (string Name){

    setCourseName(Name);

    if (Name.length() <= 25){

            courseName = Name;

        } else {

            courseName = Name.substr(0, 25);
            cout << "Name \""<< Name << "\" exceeds maximum length of 25. \n" << "Limited to the first 25 charchters." << endl;

        }

    }
    //setting the name of the course to the courseName variable
    void GradeBook::setCourseName(string Name){

    courseName=Name;

    }
    //getting the name of the course
    string GradeBook::getCourseName (){

    return courseName;

    }
    //displaying the message
    void GradeBook::displayMessage(){

    cout << "Opened Grade Book for the course of:\n" << getCourseName() << endl;

    }
