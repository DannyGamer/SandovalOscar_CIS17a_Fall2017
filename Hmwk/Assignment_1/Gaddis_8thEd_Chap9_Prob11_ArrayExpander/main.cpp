/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 27th, 2017, 8:57 PM
 * Purpose: Create a function that expands an array to twice the original size.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int *expand(int *, int);
void showAry(int *, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int size;        //Size of array
    int size2;       //Size of new array
    int *array = 0;  //Pointer to array
    int *array2 = 0; //Copy of the array
    
    //Input data
    cout << "This program will take an array, make a copy that is twice as "
            "big, and fill the rest of the array with 0." << endl;
    cout << "Enter the original size of the array: ";
    cin >> size;
    size2 = size * 2; //Double the original size for new array
    
    //Map inputs to outputs or process the data
    array = new int[size];
    
    //Fill array with values
    for(int index = 0; index < size; index++)
    {
        cout << "Enter value #" << index + 1 << " for the array: ";
        cin >> *(array + index);
    }
    
    //Output the transformed data
    array2 = expand(array, size);
    
    //Display contents of original array
    cout << "\nThe original array contains the values: " << endl;
    showAry(array, size);
    
    //Display contents of new array
    cout << "\nThe new array contains the values: " << endl;
    showAry(array2, size2);
    
    //Delete dynamically allocated memory
    delete [] array;
    delete [] array2;
    array = 0;
    array2 = 0;
    
    //Exit stage right!
    return 0;
}

int *expand(int *array, int size)
{
    int size2 = size * 2;
    int *array2 = new int[size2];
    
    //Copy the contents of original array into the new array
    for(int index = 0; index < size; index++)
    {
        *(array2 + index) = *(array + index);
    }
    
    //FIll the rest of new array with 0
    for(int count = size; count < size2; count++)
    {
        *(array2 + count) = 0;
    }
    
    //Return pointer to new array
    return array2;
}

void showAry(int *arr, int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << *(arr + index) << " ";
    }
}