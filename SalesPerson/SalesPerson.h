#ifndef SALESPERSON_H
#define SALESPERSON_H


class SalesPerson {
public:

static const int months_per_year = 12;
SalesPerson(); // constructor
void get_sales_from_user(); // input sales from keyboard
void set_sales(int, double ); //set the number of sales
void print_annual_sales(); //print yearly sales

private:

double total_annual_sales(); //private function!
double monthly_sales[months_per_year];
};

#endif
