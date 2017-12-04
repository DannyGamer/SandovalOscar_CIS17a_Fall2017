/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 1:20 PM
 * Purpose: Create absolute value function template.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
template <class T>
T absVal(T num)
{
    if(num < 0)
        num *= -1;
    return num;
}

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int number;
    
    //Input data
    cout << "This program will use a template for an absolute value function." << endl;
    cout << "Enter a number: ";
    cin >> number;
    
    //Call absVal function to get the absolute value of the number
    cout << endl << "The number that you entered is " << number << endl;
    cout << "The absolute value of the number is " << absVal(number) << endl;
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}