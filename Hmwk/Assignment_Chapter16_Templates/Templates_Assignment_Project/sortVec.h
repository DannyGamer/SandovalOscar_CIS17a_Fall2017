/* 
 * File:   sortVec.h
 * Author: Oscar Sandoval
 * Created on December 3, 2017, 11:28 PM
 * Purpose: SortVec class specification file
 */

#ifndef SORTVEC_H
#define SORTVEC_H

#include "simpleVector.h"

template <class T>
class SortVec : public SimpleVector<T>
{
    public:
    //Default constructor
    SortVec() : SimpleVector<T>()
        { }
    //Constructor
    SortVec(int size) : SimpleVector<T>(size)
        { }
    //Copy constructor
    SortVec(const SortVec &);

    //Sort vector in ascending order
    void sort();
};

//Copy Constructor
template <class T>
SortVec<T>::SortVec(const SortVec &obj) :
SimpleVector<T>(obj.size())
{
    for(int count = 0; count < this->size(); count++)
        this->operator[](count) = obj[count];
}

//Function to sort the vector's elements in ascending order
template <class T>
void SortVec<T>::sort()
{
    for(int i = 0; i < this->aSize - 1; i++)
    {
        for(int j = i + 1; j < this->aSize; j++)
        {
            if(this->aptr[i] > this->aptr[j])
            {
                T temp = this->aptr[i];
                this->aptr[i] = this->aptr[j];
                this->aptr[j] = temp;
            }
        }
    }
}

#endif /* SORTVEC_H */