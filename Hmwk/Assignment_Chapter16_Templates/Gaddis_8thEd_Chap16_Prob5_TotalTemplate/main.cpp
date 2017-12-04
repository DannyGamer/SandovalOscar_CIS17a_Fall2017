/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 3:19 PM
 * Purpose: Create a Total Template.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
template <class T>
T total(T amount)
{
    T total;
    T number; 
    
    for(int i = 0; i < amount; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        total += number;
    }
    
    return total;
}

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float amount;
    
    //Input data
    cout << "This program uses a Total function template that gets the total\n"
            "of values input by the user." << endl;
    cout << "How many numbers do you want to input? ";
    cin >> amount;
    
    //Call the total function template and calculate the total of all values input
    cout << "The total of the numbers that you input is " << total(amount) << endl;
    
    //Exit stage right!
    return 0;
}