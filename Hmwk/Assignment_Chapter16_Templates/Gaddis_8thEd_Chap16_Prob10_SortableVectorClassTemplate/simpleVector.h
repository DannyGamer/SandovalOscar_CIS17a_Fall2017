/* 
 * File:   simpleVector.h
 * Author: Oscar Sandoval
 * Created on December 3, 2017, 10:44 PM
 * Purpose: SimpleVector class specification file.
 */

#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <new>     //Needed for bad_alloc exception
#include <cstdlib> //Needed for the exit function
using namespace std;

template <class T>
class SimpleVector
{
    protected:
        int aSize;      //Number of elements in the array
        T *aptr;         //To point to the allocated array
        void memError(); //Handles memory allocation errors
        void subError(); //Handles subscripts out of range

    public:
        //Default constructor
        SimpleVector()
            {aptr = 0; aSize = 0;}
        //Constructor declaration
        SimpleVector(int);
        //Copy constructor declaration
        SimpleVector(const SimpleVector &);
        //Destructor declaration
        ~SimpleVector();
        //Accessor to return the array size
        int size() const
            {return aSize;}
        //Accessor to return a specific element
        T getElem(int position);
        //Overloaded [] operator declaration
        T &operator[](const int &);
};

//Constructor
template <class T>
SimpleVector<T>::SimpleVector(int size)
{
    aSize = size;
    
    //Allocate memory for the array.
    try
    {
        aptr = new T [aSize];
    }
    catch (bad_alloc)
    {
        memError();
    }

    // Initialize the array.
    for (int count = 0; count < aSize; count++)
        aptr[count] = 0;
}

//Copy Constructor
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    //Copy the array size
    aSize = obj.aSize;

    //Allocate memory for the array
    aptr = new T [aSize];
    
    if (aptr == 0)
        memError();

    // Copy the elements of obj's array.
    for(int count = 0; count < aSize; count++)
        aptr[count] = obj.aptr[count];
}

//Destructor
template <class T>
SimpleVector<T>::~SimpleVector()
{
    if (aSize > 0)
        delete [] aptr;
}

//Error for bad allocation  
template <class T>
void SimpleVector<T>::memError()
{
    cout << "ERROR:Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}

//Error for out of bounds subscript
template <class T>
void SimpleVector<T>::subError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(EXIT_FAILURE);
}

//Returns value stored at the subscript
template <class T>
T SimpleVector<T>::getElem(int sub)
{
    if (sub < 0 || sub >= aSize)
        subError();
    return aptr[sub];
}

//Overloaded [] operator
template <class T>
T &SimpleVector<T>::operator[](const int &sub)
{
    if (sub < 0 || sub >= aSize)
        subError();
    return aptr[sub];
}

#endif /* SIMPLEVECTOR_H */

