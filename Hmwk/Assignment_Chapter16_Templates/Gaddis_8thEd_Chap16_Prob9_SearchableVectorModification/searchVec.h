/* 
 * File:   searchVec.h
 * Author: Oscar Sandoval
 * Created on December 3, 2017, 11:00 PM
 * Purpose: SearchVec class specification file
 */

#ifndef SEARCHVEC_H
#define SEARCHVEC_H

#include "simpleVector.h"

template <class T>
class SearchVec : public SimpleVector<T>
{
    public:
    //Default constructor
    SearchVec() : SimpleVector<T>()
        { }
    //Constructor
    SearchVec(int size) : SimpleVector<T>(size)
        { }
    //Copy constructor
    SearchVec(const SearchVec &);

    //Accessor to find an item
    int findItem(const T);
};

//Copy Constructor
template <class T>
SearchVec<T>::SearchVec(const SearchVec &obj) :
SimpleVector<T>(obj.size())
{
    for(int count = 0; count < this->size(); count++)
        this->operator[](count) = obj[count];
}

//Function to search for item using binary search
template <class T>
int SearchVec<T>::findItem(const T item)
{
    int first = 0;
    int last = this->size() - 1;
    int middle;
    int position = -1;
    bool found = false;
    
    while(!found && first <= last)
    {
        middle = (first + last) / 2;
        if(this->getElem(middle) == item)
        {
            found = true;
            position = middle;
        }
        else if(this->getElem(middle) > item)
            last = middle - 1;
        else
            first = middle + 1;
    }
    
    for (int count = 0; count <= this->size(); count++)
    {
        if (this->getElem(count) == item)
            return count;
    }
    
    return position;
}

#endif /* SEARCHVEC_H */

