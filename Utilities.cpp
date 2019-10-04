/**
 * The implementation file of the Utilities class.
 */

#include "Utilities.h"
#include <iostream>

using namespace std;

int Utilities::findMaxIndex(int arr[], int arrSize) {
    int indexSoFar = 0;
    for (int currentIndex = 1; currentIndex < arrSize; ++currentIndex) {
        if (arr[currentIndex] > arr[indexSoFar])
            indexSoFar = currentIndex;
    }
    return indexSoFar;        
}

void Utilities::printArray(int arr[], int arrSize) {

    cout<<"\n\n***************************\n";
    for (int i = 0; i < arrSize; i++ )
        cout<<arr[i] + " ";
    cout<<"\n***************************\n\n";

}