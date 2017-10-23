/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Date class specification
 */

#ifndef PAYROLL_H
#define PAYROLL_H

#include <string>
using namespace std;

class Date
{
    private:
        int month;  //Month of year
        int day;    //Day of year
        int year;   //Year
    public:
        void input();
        string name(int);
        void display();
};

#endif /* PAYROLL_H */