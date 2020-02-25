#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;



int main()
{
    string name_of_course;
    GradeBook my_GradeBook_1("Programming in C++"); //now I hace a constructor, I have to input it its course name.
    GradeBook my_GradeBook_2("Norse Language");

    cout << "Grade Book created for the course of:" << my_GradeBook_1.getCourseName() << endl;
    cout << "Grade Book created for the course of:" << my_GradeBook_2.getCourseName() << endl;

    //open the GradeBook
    my_GradeBook_1.displayMessage ();

}
