/**
 * main.cpp
 */

#include "SortingAlgorithms.h"
#include "Utilities.h"
#include <iostream>

using namespace std;

int main() {

    const int ARR_SIZE = 8;

    int arr[ARR_SIZE] = {2, 11, 5, 13, 3, 17, 7, 19};
    int *a = arr;
    SortingAlgorithms sa;
    Utilities u;

    //print initial array
    u.printArray(arr, ARR_SIZE);



    return 0;
}