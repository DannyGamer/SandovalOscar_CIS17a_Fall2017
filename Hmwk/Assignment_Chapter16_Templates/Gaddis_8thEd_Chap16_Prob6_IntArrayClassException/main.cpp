/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on April 18, 2017, 11:31 AM
 * Purpose: 
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib>  //For exit function

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "intArray.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int SIZE = 10;  // Array size
    bool tryAgain = true; //Flag to reread input
    
    //Define an IntArray object with 10 elements.
    IntArray table(SIZE);

    //Store values in the array.
    for (int x = 0; x < SIZE; x++)
    table[x] = x;

    //Display the values in the array.
    for (int x = 0; x < SIZE; x++)
    cout << table[x] << " ";
    cout << endl;

    while(tryAgain)
    {
        //Attempt to use an invalid subscript.
        try
        {
            cout << "Now attempting to use an invalid subscript.\n";
            table[SIZE + 1] = 0;
        }

        catch (IntArray::SubError)
        {
            cout << "ERROR: Subscript out of range.";
            exit(0);
        }
    }

    //Exit stage right!
    return 0;
}