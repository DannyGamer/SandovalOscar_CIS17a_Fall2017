/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: PayRoll class implementation
 */

#include <iostream>

#include "Payroll.h"
using namespace std;

void Payroll::input(int count)
{
    do
    {
        cout << "Enter the hourly pay rate for employee #" 
             << count + 1 << ": $";
        cin >> hrlyRte;

        if(hrlyRte < 0)
        {
            cout << "Invalid input. Please enter a number greater than 0." 
                 << endl;
        }
    } while(hrlyRte < 0);
    
    do
    {
        cout << "Enter the number of hours worked by employee #" 
             << count + 1 << ": ";
        cin >> hrsWrkd;

        if(hrsWrkd < 0 || hrsWrkd > 60)
        {
            cout << "Invalid input. Please enter a number in the range "
                    "of 0-60." << endl;
        }
    } while(hrsWrkd < 0 || hrsWrkd > 60);
}

void Payroll::pay()
{
    totPay = hrsWrkd * hrlyRte;  //Calculate the gross pay
}

void Payroll::display(int count)
{
    cout << "Employee #" << count + 1 << endl;
    cout << "Gross Pay: $" << totPay << endl;
}