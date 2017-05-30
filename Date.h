//
// Created by Mario Jarrin  on 5/28/17.
//

#pragma once

class Date {
public:
    Date() {
        month = {1};
        day = {1};
        year = {2000};
    }

    Date(int m, int d, int y) {
        //Check that month, m, is between 1 and 12. Defaults to 1 if not.
        if (m < 1 || m > 12) {
            month = 1;
        }
        else {
            month = m;
        }

        //Assigns d to day and sets d to default number of days id d is greater or less
        //than expected number of days for that month.
        day = d;
        switch (m) {
            case 2 :
                if (d < 1 || d > 28) {
                    day = 28;
                }
                break;
            case 1 : case 3 : case 5 : case 7 :
            case  8: case 10: case 12 :
                    if (d < 1 || d > 31) {
                        day = 31;
                    }
                break;
            case 4 : case 6 : case 9 : case 11 :
                if (d < 1 || d > 31) {
                    day = 30;
                }
                break;
        }

        //Check that year, y, is greater than 1900. If less, defaults y to 1900.
        if (y < 1900) {
            year = 1900;
        }
        else {
            year = y;
        }
    }

    void print();
    std::string getMonthName();
    void printLong();

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

private:
    int month;
    int day;
    int year;
};