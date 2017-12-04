/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 12:50 PM
 * Purpose: Write templates for maximum and minimum functions.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    //Numbers to be input by user and compared by using functions
    int number;
    int number2;
    float a;
    float b;
    
    //Input data
    cout << "This program will use templates for maximum and minimum functions." << endl;
    cout << "Enter an integer number: ";
    cin >> number;
    cout << "Enter another integer number: ";
    cin >> number2;
    cout << "Enter a floating point number: ";
    cin >> a;
    cout << "Enter another floating point number: ";
    cin >> b;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << "\nThe integer numbers that you input are " << number << " and " << number2 << endl;
    cout << "The floating point numbers that you input are " << a << " and " << b << endl;
    cout << "The max integer is " << max(number, number2) << endl;
    cout << "The min integer is " << min(number, number2) << endl;
    cout << "The max floating point is " << max(a, b) << endl;
    cout << "THe min floating point is " << min(a, b) << endl;
    
    
    //Exit stage right!
    return 0;
}

//Compare two values and return the larger one
template <class T>
T max(T a, T b)
{
    if(a > b)
        return a;
    else
        return b;
}

//Compare two values and return the smaller one
template <class T>
T min(T a, T b)
{
    if(a < b)
        return a;
    else
        return b;
}