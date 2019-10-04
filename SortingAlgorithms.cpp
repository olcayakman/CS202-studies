/**
 * SortingALgorithms class implementation file.
 * @author Olcay
 * @version 04.10.2019
 */

#include "SortingAlgorithms.h"
#include <iostream>

using namespace std;

void SortingAlgorithms::selectionSort(int arr[], int arrSize) {
    for (int last = arrSize - 1; last >= 1; --last) {
        int max = utilities.findMaxIndex(arr, arrSize);
        swap(arr[max], arr[last]);
    }
}