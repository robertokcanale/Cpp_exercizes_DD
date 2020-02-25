#include <iostream>
#include <iomanip>
#include "SalesPerson.h"
using namespace std;

SalesPerson::SalesPerson(){ //constructor, initializing everything to 0
    for (int i=0; i<months_per_year; i++){
        monthly_sales[i] = 0.0;
    }
}; // constructor


void SalesPerson::get_sales_from_user(){ //getting monthly sales from user

    double month_sales;

    for (int i=1; i<=months_per_year; i++){

        cout << "\nPlease input sales for month "<< i << ":"<< endl;
        cin >> month_sales;
        set_sales(i, month_sales);
    }

}

 // input sales from keyboard
void SalesPerson::set_sales(int month, double month_sales){      //set the number of sales

    if (month <= 0 || month >12){  //test if the month is between 1 and 12
        cout <<"Invalid month"<< endl;
    } else {
        monthly_sales[month -1] = month_sales;
    }

}

void SalesPerson::print_annual_sales(){ //print yearly sales

    cout<<setprecision(2)<<fixed << "Total Yearly Sales are: €" << total_annual_sales()<<endl;

}

double SalesPerson::total_annual_sales(){
    double total = 0.0;

    for (int i = 0; i < months_per_year; i ++){
        total = total + monthly_sales[i];  //sum of total monthly sales
    }

    return total;
}
