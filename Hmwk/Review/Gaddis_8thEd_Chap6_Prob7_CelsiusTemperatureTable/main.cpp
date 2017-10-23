/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 17th, 2017, 7:00 PM
 * Purpose: Create a function that converts Fahrenheit temperatures to 
            Celsius temperatures
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Format Output

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float celsius(float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float c;  //Celsius temperature
    float f;        //Fahrenheit temperature
    
    //Input data
    cout << "This program will create a table demonstrating the Fahrenheit "
            "temperatures 0 through 20 and their Celsius equivalents.\n" << endl;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << fixed << setprecision(2);
    cout << "Fahrenheit  |  Celsius" << endl;
    cout << "----------------------" << endl; 
    for(int i = 0; i < 21; i++)
    {
        f = i;
        cout << setw(8) << f << setw(12) << celsius(f) << endl;
    }
    
    //Exit stage right!
    return 0;
}

float celsius(float f)
{
    float c;
    c = 5.0f/9.0f * (f - 32);
    return c;
}