/* 
 * File:   intArray.h
 * Author: Oscar Sandoval
 * Created on December 3, 2017, 7:12 PM
 * Purpose: IntArray class implementation file
 */

#include <iostream>
#include <cstdlib> // For the exit function

#include "intArray.h"
using namespace std;

//Constructor
IntArray::IntArray(int s)
{
    aSize = s;
    aptr = new int[aSize];
    for(int count = 0; count < aSize; count++)
        aptr[count] = 0;
}

//Copy Constructor
IntArray::IntArray(const IntArray &obj)
{
    aSize = obj.aSize;
    aptr = new int[aSize];
    for(int count = 0; count < aSize; count++)
        aptr[count] = obj.aptr[count];
}

//Destructor
IntArray::~IntArray()
{
    if(aSize > 0)
        delete [] aptr;
}

//Returns pointer to element
int &IntArray::operator[](const int &sub)
{
    if (sub < 0 || sub >= aSize)
        throw SubError();
    return aptr[sub];
}