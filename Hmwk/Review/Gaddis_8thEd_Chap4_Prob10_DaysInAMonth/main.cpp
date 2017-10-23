/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 13th, 2017, 2:33 PM
 * Purpose: Create a program that tells the days in a month
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Format output

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int month;  //Month to be input by user
    int year;   //Year to be input by user
    
    //Input data
    cout << "This program will display the number of days in a given month." 
         << endl;
    cout << "Enter a month (1-12): ";
    do
    {
        cin >> month;
        if(month < 1 || month > 12)
        {
            cout << "Invalid input. Please enter an integer in the range of 1 "
                    "through 12." << endl;
        }
    } while(month < 1 || month > 12);
    cout << "Enter a year: ";
    cin >> year;
    
    //Output the transformed data
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 7 || 
       month == 10 || month == 12)
    {
        cout << "31 days" << endl;
    }
    
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days" << endl;
    }
    else
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
                cout << "29 days" << endl; 
        }
        else if(year % 4 == 0)
                cout << "29 days" << endl;
        else
            cout << "28 days" << endl;
    }
    //Exit stage right!
    return 0;
}