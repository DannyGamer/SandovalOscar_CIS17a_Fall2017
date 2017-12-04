/* 
 * Author: Oscar Sandoval
 * Date: December 3rd, 2017
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
        //Exception classes
        class InvalidDay
            {};  //Empty class declaration
        class InvalidMonth
            {};  //Empty class declaration
        
        //Mutator Functions
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        string name(int);
        
        void display();
        void display2();
        void display3();
};

#endif /* PAYROLL_H */