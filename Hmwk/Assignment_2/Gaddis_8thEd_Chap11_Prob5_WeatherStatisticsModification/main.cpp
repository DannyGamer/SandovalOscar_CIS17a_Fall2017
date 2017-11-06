/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 8th, 2017, 9:12 PM
 * Purpose: Create a program that uses a structure to store weather data 
            for a year with an enumerated data type.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Data.h"

//Global Constants

enum Year { JANUARY, FEBRAURY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST,
             SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

//Function Prototypes
void input(Data [], Year);
float avg(Data [], Year);
void compare(Data [], Year);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float totRain = 0;    //Total rainfall for whole year
    float avgRain;         //Average monthly rainfall
    float avgTemp;        //Average of all monthly average temperatures
    const int SIZE = 12;  //Number of months in year
    Data month[SIZE];     //Array of 12 structures to hold data for all months
    Year mth;           //Loop counter
    
    //Initialize variables
    
    cout << "This program will calculate average yearly rainfall based on\n"
            "data input by the user." << endl;
    
    //Input weather data for each month
    input(month, mth);
    
    //Calculate total rainfall for year and average monthly rainfall
    for(mth = JANUARY; mth <= DECEMBER; mth = static_cast<Year>(mth + 1))
        totRain += month[mth].total;
    avgRain = totRain / SIZE;  //Average monthly rainfall
    
    //Calculate the 
    avgTemp = avg(month, mth);
    
    //Map inputs to outputs or process the data
    
    //DIsplay data for whole year
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nHere is the data calculated based on your inputs:" << endl;
    cout << "Total rainfall: " << totRain << " inches" << endl;
    cout << "Monthly Average Rainfall: " << avgRain << " inches" << endl;
    cout << "Average of all average monthly temperatures: " << avgTemp << "°F" 
         << endl;
    compare(month, mth);
    
    //Exit stage right!
    return 0;
}

void input(Data a[], Year mth)
{
    //Input data for each of the twelve months
    for(mth = JANUARY; mth <= DECEMBER; mth = static_cast<Year>(mth + 1))
    {
        cout << "\n\nEnter the following information for month " 
             << static_cast<Year>(mth + 1) << ": " << endl;
        do
        {
            cout << "Total rainfall (in inches): ";
            cin >> a[mth].total;
            if(a[mth].total < 0)
                cout << "Invalid input. Please input a number higher than 0.\n";
        } while(a[mth].total < 0);
        do
        {
            cout << "High temperature (in Fahrenheit): ";
            cin >> a[mth].high;
            if(a[mth].high > 140 || a[mth].high < -100)
                cout << "Invalid input. Please input a realistic temperature.\n";
        } while(a[mth].high > 140 || a[mth].high < -100);
        do
        {
            cout << "Low temperature (in Fahrenheit): ";
            cin >> a[mth].low;
            if(a[mth].low > 140 || a[mth].low < -100)
                cout << "Invalid input. Please input a realistic temperature.\n";
        } while(a[mth].low > 140 || a[mth].low < -100);
    }
}

float avg(Data a[], Year mth)
{
    float total = 0; //Total for all average temperatures
    float totavg;    //Average of all average temperatures
    
    //Calculate average temperature for each month
    for(mth = JANUARY; mth <= DECEMBER; mth = static_cast<Year>(mth + 1))
        a[mth].average = (a[mth].high + a[mth].low) / 2.0f;
    
    //Calculate average of all average monthly temperatures
    for(mth = JANUARY; mth <= DECEMBER; mth = static_cast<Year>(mth + 1))
        total += a[mth].average;
    totavg = total / static_cast<Year>(DECEMBER + 1);
    
    return totavg;
}

void compare(Data a[], Year mth)
{
    float highest = a[JANUARY].high; //Variable to find highest temperature
    float lowest = a[JANUARY].low;   //Variable to find lowest temperature
    int index = 0;                   //Index to know what month is highest temp
    int index2 = 0;                  //Index to know what month is lowest temp
    
    //Compare highest temperature
    for(mth = JANUARY; mth <= DECEMBER; mth = static_cast<Year>(mth + 1))
    {
        if(a[mth].high > highest)
        {
            highest = a[mth].high;
            index = static_cast<Year>(mth + 1);
        }
        if(a[mth].low < lowest)
        {
            lowest = a[mth].low;
            index2 = static_cast<Year>(mth + 1);
        }
    }
    cout << "The highest temperature is " << highest << "°F which happened "
            "during month " << index << endl;
    cout << "The lowest temperature is " << lowest << "°F which happened "
            "during month " << index2 << endl;
}