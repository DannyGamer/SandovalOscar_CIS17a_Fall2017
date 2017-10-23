/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 27th, 2:12 PM
 * Purpose:  Create a function that dynamically allocates an array.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int *create(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int size;
    int *array = 0;
    
    cout << "This program will dynamically allocate an array of integers." << endl;
    cout << "Enter the size you want the array to be: ";
    cin >> size;
    
    //Input or initialize values Here
    array = create(size);
    
    //Process/Calculations Here
    
    //Output Located Here
    cout << "The dynamically allocated array contains " << size << " numbers, "
            "which are:" << endl;
    for(int index = 0; index < size; index++)
        cout << array[index] << " ";

    //Delete dynamically allocated memory
    delete [] array;
    array = 0;
    
    //Exit
    return 0;
}

int *create(int size)
{
    int *arr = 0;
    
    arr = new int[size];
    
    for(int index = 0; index < size; index++)
        arr[index] = index + 1;
    
    return arr;
}