/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 27th, 2017, 11:50 AM
 * Purpose: Create a program that accepts grades and sorts them in 
            ascending order
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void sortAry(float *, int);
void average(float *, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int size;
    float *tests = 0;
    float avg;
    
    //Initialize variables
    
    //Input data
    cout << "This program will sort and average test scores input by the user." << endl;
    cout << "Input the number of test scores you want to sort: ";
    cin >> size;
    
    tests = new float [size]; 
    
    //Map inputs to outputs or process the data
    for (int index = 0; index < size; index++)
    {
        cout << "Enter test score " << index + 1 << ": ";
        cin >> *(tests + index);
    }
    //Output the transformed data
    sortAry(tests, size);
    average(tests, size);
    
    //Delete dynamically allocated memory
    delete [] tests;
    tests = 0;
    //Exit stage right!
    return 0;
}

void sortAry(float *tests, int size)
{
    for(int index = 0; index < size - 1; index++)
    {
        for(int count = index + 1; count < size; count++)
        {
            if(*(tests + index) > *(tests + count))
            {
                float temp = tests[index];
                tests[index] = tests[count];
                tests[count] = temp;
            }
        }
    }
    
    cout << "\nThe tests scores sorted in ascending order are:" << endl;
    for (int index = 0; index < size; index++)
    {
        cout << *(tests + index) << " ";
    }
}

void average(float *tests, int size)
{
    float total = 0;
    float avg;
    
    for (int index = 0; index < size; index++)
        total += *(tests + index);
    
    avg = total / size;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe average score is " << avg << endl;
}