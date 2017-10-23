/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 13th, 2017, 2:33 PM
 * Purpose: Create a program that converts from Celsius to Fahrenheit
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
    float dollars; //Currency in dollars
    float yen;    //Currency in yen
    float euros;   //Currency in euros
    
    //Initialize variables
    
    //Input data
    cout << "This program will convert U.S. dollar currency to Japanese Yen "
            "and to Euros.\n" << endl;
    cout << "Please enter a dollar amount to convert: ";
    cin >> dollars;
    
    //Convert Celsius temperature to Fahrenheit temperature
    yen = dollars * (110.47);
    euros = dollars * (0.84);
    
    //Output the transformed data
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "\n$" << dollars << " = " << yen << " Japanese Yen." << endl;
    cout << "$" << dollars << " = " << euros << " Euros." << endl;
    
    //Exit stage right!
    return 0;
}