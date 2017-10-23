/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Scores class implementation
 */

#include <iostream>
#include <iomanip>

#include "Scores.h"

using namespace std;

Scores::Scores()
{
    //Initialize test scores to 0
    test1 = 0.0;
    test2 = 0.0;
    test3 = 0.0;
    
    cout << "This program will calculate the average of 3 test scores input\n"
            "by the user." << endl;
}

void Scores::input()
{
    do
    {
        cout << "Enter the score for test #1: ";
        cin >> test1;
        if(test1 < 0)
            cout << "Invalid input. Please enter a number greater than or\n"
                    "equal to 0." << endl;
    } while(test1 < 0);
    
    do
    {
        cout << "Enter the score for test #2: ";
        cin >> test2;
        if(test2 < 0)
            cout << "Invalid input. Please enter a number greater than or\n"
                    "equal to 0." << endl;
    } while(test2 < 0);
    
    do
    {
        cout << "Enter the score for test #3: ";
        cin >> test3;
        if(test3 < 0)
            cout << "Invalid input. Please enter a number greater than or\n"
                    "equal to 0." << endl;
    } while(test3 < 0);
}

float Scores::average(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

void Scores::display()
{
    cout << "\nThe test scores you entered are:\n" << endl;
    cout << "Test #1: " << test1 << endl;
    cout << "Test #2: " << test2 << endl;
    cout << "Test #3: " << test3 << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "The average of the test scores is " << average(test1, test2, test3) << endl;
}