/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 6th, 2017, 1:23 PM
 * Purpose: Create a program that uses a structure to store weather data 
            for a year
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Data.h"

//Global Constants

//Function Prototypes
void input(Data [], const int);
float avg(Data [], const int);
void compare(Data [], const int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float totRain = 0;    //Total rainfall for whole year
    float avgRain;         //Average monthly rainfall
    float avgTemp;        //Average of all monthly average temperatures
    const int SIZE = 12;  //Number of months in year
    Data month[SIZE];     //Array of 12 structures to hold data for all months
    
    //Initialize variables
    
    cout << "This program will calculate average yearly rainfall based on\n"
            "data input by the user." << endl;
    
    //Input weather data for each month
    input(month, SIZE);
    
    //Calculate total rainfall for year and average monthly rainfall
    for(int index = 0; index < SIZE; index++)
        totRain += month[index].total;
    avgRain = totRain / SIZE;  //Average monthly rainfall
    
    //Calculate the 
    avgTemp = avg(month, SIZE);
    
    //Map inputs to outputs or process the data
    
    //DIsplay data for whole year
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nHere is the data calculated based on your inputs" << endl;
    cout << "Total rainfall: " << totRain << " inches" << endl;
    cout << "Monthly Average Rainfall: " << avgRain << " inches" << endl;
    cout << "Average of all average monthly temperatures: " << avgTemp << "°F" 
         << endl;
    compare(month, SIZE);
    
    //Exit stage right!
    return 0;
}

void input(Data a[], const int SIZE)
{
    //Input data for each of the twelve months
    for(int index = 0; index < SIZE; index++)
    {
        cout << "\n\nEnter the following information for month " 
             << index + 1 << ": " << endl;
        do
        {
            cout << "Total rainfall (in inches): ";
            cin >> a[index].total;
            if(a[index].total < 0)
                cout << "Invalid input. Please input a number higher than 0.\n";
        } while(a[index].total < 0);
        do
        {
            cout << "High temperature (in Fahrenheit): ";
            cin >> a[index].high;
            if(a[index].high > 140 || a[index].high < -100)
                cout << "Invalid input. Please input a realistic temperature.\n";
        } while(a[index].high > 140 || a[index].high < -100);
        do
        {
            cout << "Low temperature (in Fahrenheit): ";
            cin >> a[index].low;
            if(a[index].low > 140 || a[index].low < -100)
                cout << "Invalid input. Please input a realistic temperature.\n";
        } while(a[index].low > 140 || a[index].low < -100);
    }
}

float avg(Data a[], const int SIZE)
{
    float total = 0; //Total for all average temperatures
    float totavg;    //Average of all average temperatures
    
    //Calculate average temperature for each month
    for(int index = 0; index < SIZE; index++)
        a[index].average = (a[index].high + a[index].low) / 2.0f;
    
    //Calculate average of all average monthly temperatures
    for(int index = 0; index < SIZE; index++)
        total += a[index].average;
    totavg = total / SIZE;
    
    return totavg;
}

void compare(Data a[], const int SIZE)
{
    float highest = a[0].high;
    float lowest = a[0].low;
    int index;
    int index2;
    
    //Compare highest temperature
    for(int count = 0; count < SIZE; count++)
    {
        if(a[count].high > highest)
        {
            highest = a[count].high;
            index = count + 1;
        }
        if(a[count].low < lowest)
        {
            lowest = a[count].low;
            index2 = count + 1;
        }
    }
    cout << "The highest temperature is " << highest << "°F which happened "
            "during month " << index << endl;
    cout << "The lowest temperature is " << lowest << "°F which happened "
            "during month " << index2 << endl;
}