//
// Created by Mario Jarrin on 5/28/17.
//

#include <iostream>
#include <iomanip>
#include "Date.h"
using std::cout;
using std::endl;
using std::setw;
using std::setfill;

void Date::print() {
    cout << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day
         << "/" << year << endl;
}

std::string Date::getMonthName() {
    if (month == 1) {
        return "January";
    } else if (month == 2) {
        return "February";
    } else if (month == 3) {
        return "March";
    } else if (month == 4) {
        return "April";
    } else if (month == 5) {
        return "May";
    } else if (month == 6) {
        return "June";
    } else if (month == 7) {
        return "July";
    } else if (month == 8) {
        return "August";
    } else if (month == 9) {
        return "September";
    } else if (month == 10) {
        return "October";
    } else if (month == 11) {
        return "November";
    } else {
        return "December";
    }
    //return std::__cxx11::string();
}

void Date::printLong() {
    cout << day << " " << getMonthName() << " " << year;
}
