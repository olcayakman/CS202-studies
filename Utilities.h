/**
 * A utilities class that contains some functions that I find
 * necessary in the implementation process of certain sorting
 * functions that do not necessarily need be explicitly 
 * explained in the implementation of the particular algortihm.
 */

#ifndef _UTIL
#define _UTIL

#include <iostream>

using namespace std;

class Utilities {

public:
//    Utilities();

    //functions-- utilities
    int findMaxIndex(int arr[], int arrSize);
    void printArray(int arr[], int arrSize);

};
#endif