/* 
 * Author: Oscar Sandoval
 * Date: December 3rd, 2017
 * Purpose: Date class implementation
 */

#include <iostream>
#include <string>

#include "Date.h"
using namespace std;

void Date::setMonth(int m)
{
    if(m >= 1 && m <= 12)
        month = m;
    else
        throw InvalidMonth();
}

void Date::setDay(int d)
{
        if(d >= 1 && d <= 31)
            day = d;
        else
            throw InvalidDay();
}

void Date::setYear(int y)
{
    do
    {
        year = y;
        
        if(year < 1)
        {
            cout << "Invalid input. Please enter a number greater than 0: ";
            cin >> y;
        }
    } while(year < 1);
}

string Date::name(int number)
{
    string mName;  //Name of month
    
    switch(number)
    {
        case 1:
            mName = "January ";
            break;
        case 2:
            mName = "February ";
            break;
        case 3:
            mName = "March ";
            break;
        case 4:
            mName = "April ";
            break;
        case 5:
            mName = "May ";
            break;
        case 6:
            mName = "June ";
            break;
        case 7:
            mName = "July ";
            break;
        case 8:
            mName = "August ";
            break;
        case 9:
            mName = "September ";
            break;
        case 10:
            mName = "October ";
            break;
        case 11:
            mName = "November ";
            break;
        case 12:
            mName = "December ";
            break;
        default:
            cout << "Bad input";
            break;
    }
    return mName;
}

void Date::display()
{
    cout << month << "/" << day << "/" << year << endl;
}

void Date::display2()
{
    cout << name(month) << day << ", " << year << endl;
}

void Date::display3()
{
    cout << day << " " << name(month) << year << endl;
}