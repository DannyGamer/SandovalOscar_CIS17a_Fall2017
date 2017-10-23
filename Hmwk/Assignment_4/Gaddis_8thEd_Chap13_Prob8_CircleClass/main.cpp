/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 20th, 2017, 7:20 PM
 * Purpose: Create a program that calculates area, diameter, and circumference
            of a circle from a radius input by the user.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Circle.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   //Declare variables
    float r;  //Radius of a circle
    
    cout << "This program will calculate the area, diameter, and\n"
            "circumference of a circle from a radius input by the user.\n";
    
    //Input radius
    do
    {
        cout << "Enter the radius of a circle: ";
        cin >> r;
        if(r < 0)
            cout << "Invalid input. Please enter a number greater than\n"
                    "or equal to 0." << endl;
    } while(r < 0);
    
    //Declare Circle object
    Circle circle(r);
       
    //Output the transformed data
    cout << "\nHere is the data for a circle based on the radius that you\n"
            "input.\n" << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Radius: " << circle.getRad() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Diameter: " << circle.getDmtr() << endl;
    cout << "Circumference: " << circle.getCirc() << endl;
    
    //Exit stage right!
    return 0;
}