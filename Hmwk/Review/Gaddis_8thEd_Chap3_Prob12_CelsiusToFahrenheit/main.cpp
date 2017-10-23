/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 13th, 2017, 2:17 PM
 * Purpose: Create a program that converts from Celsius to Fahrenheit
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float c; //Temperature in Celsius degrees
    float f; //Temperature in Fahrenheit degrees
    
    //Initialize variables
    
    //Input data
    cout << "This program will convert Celsius temperatures to Fahrenheit "
    "temperatures.\n\n";
    cout << "Please enter a Celsius temperature:";
    cin >> c;
    
    //Convert Celsius temperature to Fahrenheit temperature
    f = (9.0f / 5.0f) * c + 32;
    
    //Output the transformed data
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << c << " degrees Celsius is equal to " << f << " degrees Fahrenheit" 
         << endl;
    
    //Exit stage right!
    return 0;
}