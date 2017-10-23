/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 27th, 2:28 PM
 * Purpose: Rewrite function so that it uses pointers instead of reference 
            variables and demonstrate in complete program.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int change(int *, int *);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int x;
    int y;
    int *ptr = &x;   //Make pointer ptr point to the address of x
    int *ptr2 = &y;  //Make pointer ptr2 point to the address of y
    int sum;
    
    cout << "This program will switch the values of a number x and a number y "
            "with each other, multiply each by 10 and display their sum.\n";
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    
    cout << "\nOriginal values:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    //Input or initialize values Here
    sum = change(ptr, ptr2);
    
    //Process/Calculations Here
    
    //Output Located Here
    cout << "\nNew values:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    cout << "\nTheir sum is " << sum << endl;

    //Delete dynamically allocated memory
    
    //Exit
    return 0;
}

int change(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}