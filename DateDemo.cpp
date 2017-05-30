//
// Created by Mario Jarrin on 5/28/17.
//
// DateDemo.cpp

#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::setfill;
using std::setw;
using std::string;

#include "Date.h"

// note - you may need to change the definition of the main function to
// be consistent with what your C++ compiler expects.

//int _tmain(int argc, _TCHAR* argv[])

int main()
{
    Date d1;             // default ctor
    Date d2(7, 4, 1976); // July 4'th 1976
    Date d3(0, 15, 1880);// Adjusted by ctor to January 15'th 1900

    d1.print();         // prints 01/01/2000
//TODO Remove below before submitting.
//ADD ADDITIONAL TEST AND COMMENT WELL.
//RETHINK VARIABLE NAMES
    int day = d1.getDay();
    cout << day << endl;
    Date d5(2, 29, 2987);
    d5.print();
    Date d6(1, 45, 1878) ;
    d6.print();
    Date d7(1, -7, 1878);
    d7.print();
    Date d8(4, 40, 1900);
    d8.print();
//TODO Remove above before submitting.

    d1.printLong();     // prints 1 January 2000
    cout << endl;
//
    d2.print();         // prints 07/04/1976
    d2.printLong();     // prints 4 July 1976
    cout << endl;
//
    d3.print();         // prints 01/15/1900
    d3.printLong();     // prints 15 January 1900
    cout << endl;
//
    cout << "object d2's day is " << d2.getDay() << endl;
    cout << "object d2's month is "  << d2.getMonth() << " which is " << d2.getMonthName() << endl;
    cout << "object d2's year is " << d2.getYear() << endl;
//
    string s;
    cout << endl << "Done - Press enter key to end program" << endl;
    cin >> s;
//
    return 0;
}