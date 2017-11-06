/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 18th, 2017, 12:50 PM
 * Purpose: Create program that finds mean, median, and mode of an array.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <vector>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void mrkSort(int *, int);
void prntAry(int *, int, int);
float mean(int *, int);
float median(int *, int);
int *mode(int *, int, int &);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and initialize variables
    int *array = 0;
    int perLine = 10;
    int size;
    int *modes = 0;
    int more = 0;      //Amount of modes
    
    //Input data
    cout << "This program will find the mean, median, and mode of an array." << endl;
    cout << "Input the size of the array: ";
    cin >> size;
    
    //Create array based on the size given by user
    array = new int[size];
    
    //Fill the array with values
    for(int index = 0; index < size; index++)
    {
        cout << "Input value #" << index + 1 << " for the array: ";
        cin >> *(array + index);
    }
    
    //Sort array
    mrkSort(array, size);
    
    //Display array
    cout << "\nThe array sorted is:" << endl;
    prntAry(array, size, perLine);
    
    //Get mean of array
    cout << "\n\nThe mean is " << mean(array, size) << endl;
    
    //Get median of array
    cout << "The median is " << median(array, size) << endl;
    
    //Get mode of array
    mode(array, size, more);
//    modes = mode(array, size, more);
//    
//    cout << "There are " << modes[0] << "modes." << endl;
//    if(modes[0] > 0)
//    {
//        cout << "The frequency of the mode is " << modes[1] << endl;
//    }
//    if(modes[0] == 1)
//        cout << "The mode is " << modes[2] << endl;
//    else if(modes[0] > 1)
//    {
//        for(int index = 0; index < more; index++)
//            cout << "The modes are " << modes[index + 2] << ", ";
//    }
    
    //Map inputs to outputs or process the data
    
    //Delete dynamically allocated memory
    delete [] array;
    array = 0;
    
    //Exit stage right!
    return 0;
}

void mrkSort(int *array, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
            }
        }
    }
}

void prntAry(int *array, int size, int perLine)
{
    for(int index = 0; index < size; index++)
    {
        //Output numbers by ten per line
        cout << array[index] << " ";
        if(index % perLine == perLine - 1)
            cout << endl;
    }
}

float mean(int *array, int size)
{
    float total = 0;
    float mean;
    
    for(int index = 0; index < size; index++)
    {
        total += array[index];
    }
    mean = total / size;
    
    return mean;
}

float median(int *array, int size)
{
    float median;
    int index = size / 2;
    
    if(size % 2 == 0)
    {
        median = array[index - 1] + array[index];
        median = median / 2;
    }
    else
        median = array[index];
    
    return median;
}

int *mode(int *array, int size, int &more)
{
    int value;       //Value of mode
    int number = 1;  //Number of modes
    int repeat = 1;  //Number a value of repeats
    int pRepeat = 0; //Number of previous value repeats
    vector<int> nums; //Value of the different modes available
    
//    for(int index = 0; index < size - 1; index++)
//    {
//        for(int count = index + 1; count < size; count++)
//        {
//            if(array[index] == array[count])
//            {
//                repeat++;
//            }
//        }
//        pRepeat = repeat;
//        
//        if(repeat > pRepeat)
//        {
//            value = 
//        }
//    }
    
    
    
    for(int index = 0, count = index + 1; index < size - 1, count < size; index++, count++)
    {
            //Compare first value with second value
            if(array[index] == array[count])
            {
                repeat++; //Increase number of repetitions for given value
                cout << "Repeat: " << repeat << endl;
                cout << "pRepeat: " << pRepeat << endl;
                
                if(repeat == pRepeat)
                {
                    cout << "Repeating" << endl;
                    number++;
                    nums.push_back(value);
                }
                
                if(repeat > pRepeat)
                {
                    number = 1;
                    value = array[index];
                    pRepeat = repeat;
                }
            }
        repeat = 1;
    }

//    int size2 = number + 2;
//    int mode[size2] = {};
//    
//    mode[0] = number;
//    mode[1] = pRepeat;
//    
//    //Get the different modes available
//    for(int index = 0; index < number; index++)
//    {
//        mode[index + 2] = nums[index];
//    }
    
    if(pRepeat == 0)
        cout << "There is no mode." << endl;
    else if(number == 1)
        cout << "The mode is " << value << endl;
    else
    {
        cout << "The modes are ";
        cout << number << endl;
        for(int index = 0; index < number; index++)
        {
            cout << nums[index] << ", ";
        }
    }
    
    //return mode;
}