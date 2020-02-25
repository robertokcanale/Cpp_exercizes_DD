#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "string.h"
#include "Date.h"

using namespace std;

class Employee {
public:

    Employee(const string &, const string &, const Date &, const Date &);
    void print_info();
    ~Employee();
    string get_first_name() const;
    string get_last_name() const;

    static int get_count();


private:
    static int total_count; //number of total employees
    string first_name; //composition, memeber object
    string last_name; //composition, memeber object
    const Date birth_date; //composition, memeber object
    const Date hire_date; //composition, memeber object
};


#endif
