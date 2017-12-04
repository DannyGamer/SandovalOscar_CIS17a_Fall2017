/* 
 * File:   intArray.h
 * Author: Oscar Sandoval
 * Created on December 3, 2017, 7:12 PM
 * Purpose: IntArray class specification file
 */

#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
    private:
        int *aptr;             //Pointer to the array
        int aSize;             //Holds the array size
    public:
        //Exception class
        class SubError
            {};  //Empty class declaration
        IntArray(int);              //Constructor
        IntArray(const IntArray &); //Copy constructor
        ~IntArray();                //Destructor
        int size() const // Returns the array size
            {return aSize;}
        int &operator[](const int &); // Overloaded [] operator
};

#endif /* INTARRAY_H */