/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Date class implementation
 */

#include <iostream>
#include <string>

#include "Date.h"
using namespace std;

void Date::input()
{
    do
    {
        cout << "Enter the month (in integer): ";
        cin >> month;
        if(month < 1 || month > 12)
            cout << "Invalid input. Please enter a number in the range of\n"
                    "1-12" << endl;
    } while(month < 1 || month > 12);
    
    do
    {
        cout << "Enter the day (in integer): ";
        cin >> day;
        if(day < 1 || day > 31)
            cout << "Invalid input. Please enter a number in the range of\n"
                    "1-31" << endl;
    } while(day < 1 || day > 31);
    
    do
    {
        cout << "Enter the year (in integer): ";
        cin >> year;
        if(year < 1)
            cout << "Invalid input. Please enter a number greater than 0." 
                 << endl;
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
    cout << "\nThe date you entered shown in 3 different forms is:\n" << endl;
    cout << month << "/" << day << "/" << year << endl;
    cout << name(month) << day << ", " << year << endl;
    cout << day << " " << name(month) << year << endl;
}