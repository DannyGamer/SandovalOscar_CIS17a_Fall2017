/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 8:50 PM
 * Purpose: Calculate Rainfall Statistics using a vector.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Formatting output
#include <vector>   //Needed for vector
#include <algorithm>//Needed for algorithms

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 12;  //Total number of months
    float total = 0;      //To calculate total rainfall
    float average;        //To calculate average rainfall
    int number;           //To hold maximum value
    int number2;          //To hold minimum value
    float a;                //To hold rainfall for a month
    
    //Define a vector object
    vector<float> month;
    
    //Define an iterator object.
    vector<float>::iterator iter;
    
    //Input data
    cout << "This program will calculate different rainfall statistics\n"
            "based on information that you input." << endl;
    
    for(int i = 0; i < SIZE; i++)
    {
        do
        {
            cout << "Input the total rainfall for month " << i + 1 << ": ";
            cin >> a;
            if (a < 0)
                cout << "Invalid input. Enter a positive number." << endl;
            else
                month.push_back(a);
        } while(a < 0) ;
    }
    
    // Calculate total rainfall in the year
    for(int i = 0; i < SIZE; i++)
        total += month[i];
    
    // Calculate average monthly rainfall
    average = total / SIZE;
    
    //Find months with the highest and lowest amounts
    float highest = month[0];
    for(int count = 1; count < SIZE; count++)
    {
        if(month[count] > highest)
        {
            highest = month[count];
            number = count;
        }
    }
    
    // Find the lowest value in the array
    float lowest = month[0];
    for(int low = 1; low < SIZE; low++)
    {
        if(month[low] < lowest)
        {
            lowest = month[low];
            number2 = low;
        }
    }
    
    //Output the transformed data
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The total rainfall in the year is " << total << endl;
    cout << "The average monthly rainfall is " << average << endl;
    cout << "Month " << number + 1 << " is the the month with the highest amount of "
            "rainfall\nwith an amount of " << highest << endl;
    cout << "Month " << number2 + 1 << " is the the month with the lowest amount of "
            "rainfall\nwith an amount of " << lowest << endl;
    
    //Exit stage right!
    return 0;
}