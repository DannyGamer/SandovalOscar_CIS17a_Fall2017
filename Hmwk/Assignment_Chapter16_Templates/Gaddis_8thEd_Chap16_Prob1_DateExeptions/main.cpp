/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 5:13 PM
 * Purpose: Create a program that displays a date input by the user in 3 
            different forms.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Date.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    Date date;             //Create Date object
    int month;             //Month of year
    int day;               //Day of month
    int year;              //Year
    bool tryAgain = true;  //Flag to reread input
    
    
    cout << "This program will display a date input by the user in 3\n"
            "different forms." << endl;
    
    //Get information for the date
    cout << "Enter the month (in integer): ";
    cin >> month;
    
    //Store month in object
    while(tryAgain)
    {
        try
        {
            date.setMonth(month);
            tryAgain = false;
        }
        catch (Date::InvalidMonth)
        {
            cout << "Invalid input. Please enter a value in the range 1-12: ";
            cin >> month;
        }
    }
    
    cout << "Enter the day (in integer): ";
    cin >> day;
    
    //Store day in object
    tryAgain = true;
    while(tryAgain)
    {
        try
        {
            date.setDay(day);
            tryAgain = false;
        }
        catch (Date::InvalidDay)
        {
            cout << "Invalid input. Please enter a value in the range 1-31: ";
            cin >> day;
        }
    }
    
    cout << "Enter the year (in integer): ";
    cin >> year;
    
    //Store year in object
    date.setYear(year);
    
    //Display date in 3 different forms
    cout << "\nThe date you entered shown in 3 different forms is:\n" << endl;
    date.display();
    date.display2();
    date.display3();
    
        
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}