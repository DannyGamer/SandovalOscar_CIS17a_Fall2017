/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 11:45 PM
 * Purpose: Templates Assignment Project
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
#include <vector>
#include <cstdlib>  //For exit function

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "date.h"
#include "intArray.h"
#include "searchVec.h"
#include "sortVec.h"

//Global Constants

//Function Prototypes
void sortAry(vector<float>, int);
void average(vector<float>, int);

template <class T>
T absVal(T num)
{
    if(num < 0)
        num *= -1;
    return num;
}

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
    char choice;
    
    //Show menu and loop
    do
    {
        //Display Menu
        cout << endl << endl << "Type 1 for Problem 1" << endl;
        cout << "Type 2 for Problem 2" << endl;
        cout << "Type 3 for Problem 3" << endl;
        cout << "Type 4 for Problem 4" << endl;
        cout << "Type 5 for Problem 5" << endl;
        cout << "Type 6 for Problem 6" << endl;
        cout << "Type 7 for Problem 9" << endl;
        cout << "Type 8 for Problem 10" << endl;
        cout << "Type 9 for Problem 13" << endl;
        cout << "Type 0 for Problem 14" << endl;
        cout << "Type anything else to exit" << endl;
        
        //Input the choice
        cout << "Problem ";
        cin >> choice;
        cout << endl << endl;
        
        //Place solutions to problems in switch statement
        switch(choice)
        {
            case '1':
            {
                //Declare and initialize variables
                Date date;             //Create Date object
                int month;             //Month of year
                int day;               //Day of month
                int year;              //Year
                bool tryAgain = true;  //Flag to reread input


                cout << "This program will display a date input by the user in 3\n"
                        "different forms." << endl;

                //Get information for the date
                cout << "Enter the month (in integer): ";
                cin >> month;

                //Store month in object
                while(tryAgain)
                {
                    try
                    {
                        date.setMonth(month);
                        tryAgain = false;
                    }
                    catch (Date::InvalidMonth)
                    {
                        cout << "Invalid input. Please enter a value in the range 1-12: ";
                        cin >> month;
                    }
                }

                cout << "Enter the day (in integer): ";
                cin >> day;

                //Store day in object
                tryAgain = true;
                while(tryAgain)
                {
                    try
                    {
                        date.setDay(day);
                        tryAgain = false;
                    }
                    catch (Date::InvalidDay)
                    {
                        cout << "Invalid input. Please enter a value in the range 1-31: ";
                        cin >> day;
                    }
                }

                cout << "Enter the year (in integer): ";
                cin >> year;

                //Store year in object
                date.setYear(year);

                //Display date in 3 different forms
                cout << "\nThe date you entered shown in 3 different forms is:\n" << endl;
                date.display();
                date.display2();
                date.display3();

                //Break from Switch
                break;
            }
            case '2':
            {   
                //Break from Switch
                break;
            }
            case '3':
            {
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
                cout << "The min floating point is " << min(a, b) << endl;
                //Break from Switch
                break;
            }
            case '4':
            {
                //Declare variables
                int number;

                //Input data
                cout << "This program will use a template for an absolute value function." << endl;
                cout << "Enter a number: ";
                cin >> number;

                //Call absVal function to get the absolute value of the number
                cout << endl << "The number that you entered is " << number << endl;
                cout << "The absolute value of the number is " << absVal(number) << endl;
                //Break from switch
                break;
            }
            case '5':
            {
                //Declare variables
                float amount;

                //Input data
                cout << "This program uses a Total function template that gets the total\n"
                        "of values input by the user." << endl;
                cout << "How many numbers do you want to input? ";
                cin >> amount;

                //Call the total function template and calculate the total of all values input
                cout << "The total of the numbers that you input is " << total(amount) << endl;
                //Break from switch
                break;
            }
            case '6':
            {
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
                //Break from Switch
                break;
            }
            case '7':
            {
                //Declare variables
                const int SIZE = 10; //Number of elements
                int count;           //Loop counter
                int result;          //To hold search results
                int position = -1;

                //Create SearchableVector object
                SearchVec<int> intTable(SIZE);

                //Store values in the objects.
                for (count = 0; count < SIZE; count++)
                {
                    intTable[count] = (count * 2);
                }

                //Display the values in the objects
                cout << "These values are in intTable:\n";
                for (count = 0; count < SIZE; count++)
                cout << intTable[count] << " ";
                cout << endl;

                // Search for the value 6 in intTable.
                cout << "\nSearching for 6 in intTable using binary search.\n";
                result = intTable.findItem(6);
                if (result == position)
                    cout << "6 was not found in intTable.\n";
                else
                    cout << "6 was found at subscript " << result << endl;
                //Break from Switch
                break;
            }
            case '8':
            {
                //Declare variables
                int SIZE = 10; //Number of elements
                int count;           //Loop counter
                int result;          //To hold search results

                cout << "This program will use a SimpleVector class template\n"
                        "to store numbers and arrange them." << endl;
                cout << "Enter the amount of numbers you want to put in the vector: ";
                cin >> SIZE;
                //Create SearchableVector object
                SortVec<float> intTable(SIZE);

                //Store values in the objects.
                for (count = 0; count < SIZE; count++)
                {
                    cout << "Enter value #" << count + 1 << ": ";
                    cin >> intTable[count];
                }

                //Display the values in the object
                cout << "These values are in intTable:\n";
                for (count = 0; count < SIZE; count++)
                    cout << intTable[count] << " ";
                cout << endl;

                //Sort the vector's elements in ascending order
                cout << "\nSorting elements in intTable.\n";
                intTable.sort();

                //Display the values in the object sorted in ascending order
                cout << "These values are in intTable sorted in ascending order:\n";
                for (count = 0; count < SIZE; count++)
                    cout << intTable[count] << " ";
                cout << endl;
                //Break from Switch
                break;
            }
            case '9':
            {
                //Declare variables
                const int SIZE = 12;  //Total number of months
                float total = 0;      //To calculate total rainfall
                float average;        //To calculate average rainfall
                int number;           //To hold maximum value
                int number2;          //To hold minimum value
                float a;                //To hold rainfall for a month

                //Define a vector object
                vector<float> month;

                //Define an iterator object.
                vector<float>::iterator iter;

                //Input data
                cout << "This program will calculate different rainfall statistics\n"
                        "based on information that you input." << endl;

                for(int i = 0; i < SIZE; i++)
                {
                    do
                    {
                        cout << "Input the total rainfall for month " << i + 1 << ": ";
                        cin >> a;
                        if (a < 0)
                            cout << "Invalid input. Enter a positive number." << endl;
                        else
                            month.push_back(a);
                    } while(a < 0) ;
                }

                // Calculate total rainfall in the year
                for(int i = 0; i < SIZE; i++)
                    total += month[i];

                // Calculate average monthly rainfall
                average = total / SIZE;

                //Find months with the highest and lowest amounts
                float highest = month[0];
                for(int count = 1; count < SIZE; count++)
                {
                    if(month[count] > highest)
                    {
                        highest = month[count];
                        number = count;
                    }
                }

                // Find the lowest value in the array
                float lowest = month[0];
                for(int low = 1; low < SIZE; low++)
                {
                    if(month[low] < lowest)
                    {
                        lowest = month[low];
                        number2 = low;
                    }
                }

                //Output the transformed data
                cout << fixed << showpoint << setprecision(2) << endl;
                cout << "The total rainfall in the year is " << total << endl;
                cout << "The average monthly rainfall is " << average << endl;
                cout << "Month " << number + 1 << " is the the month with the highest amount of "
                        "rainfall\nwith an amount of " << highest << endl;
                cout << "Month " << number2 + 1 << " is the the month with the lowest amount of "
                        "rainfall\nwith an amount of " << lowest << endl;
                //Break from Switch
                break;
            }
            case '0':
            {
                //Declare variables
                int size;           
                float avg;
                float number;

                //Define a vector object
                vector<float> tests;

                //Initialize variables

                //Input data
                cout << "This program will sort and average test scores input by the user." << endl;
                cout << "Input the number of test scores you want to sort: ";
                cin >> size;

                //Map inputs to outputs or process the data
                for (int index = 0; index < size; index++)
                {
                    cout << "Enter test score " << index + 1 << ": ";
                    cin >> number;
                    tests.push_back(number);
                }

                //Output the transformed data
                sortAry(tests, size);
                average(tests, size);
                //Break from Switch
                break;
            }
            default:
            {
                cout << "Exit the program" << endl;
            }
            
        }
    }while(choice >= '0' && choice <= '9');
    
    //Exit stage right!
    return 0;
}

void sortAry(vector<float> tests, int size)
{
    for(int index = 0; index < size - 1; index++)
    {
        for(int count = index + 1; count < size; count++)
        {
            if(tests[index] > tests[count])
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
        cout << tests[index] << " ";
    }
}

void average(vector<float> tests, int size)
{
    float total = 0;
    float avg;
    
    for (int index = 0; index < size; index++)
        total += tests[index];
    
    avg = total / size;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe average score is " << avg << endl;
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