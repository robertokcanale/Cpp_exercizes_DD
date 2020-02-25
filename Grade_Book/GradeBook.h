#include <iostream>
#include <string>

using namespace std;

//defining the class here


class GradeBook
{

//list of public functions (or data) contatined in the class
public:

    //declareing a CONTRUCTOR here, with the same name as the class, that initializes my class
    GradeBook (string Name);
    //setting the name of the course to the courseName variable
    void setCourseName(string Name);
    //getting the name of the course
    string getCourseName ();
    //displaying the message
    void displayMessage();

//list of privata data to be use by each class element
private:
    string courseName;
};
