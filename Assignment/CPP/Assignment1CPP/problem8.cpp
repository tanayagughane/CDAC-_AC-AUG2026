//============================================================================
// Name        : Problem8.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//================================================

#include <iostream>

using namespace std;

// Function to find minimum and maximum
bool parsePacket(const int* rawData, int size,
                 int** outMin, int** outMax) {

    // If size is 0 or negative
    if (size <= 0) {
        return false;
    }

    // Initially assume first element is min and max
    const int* minPtr = rawData;
    const int* maxPtr = rawData;

    // Check all elements
    for (int i = 1; i < size; i++) {

        if (*(rawData + i) < *minPtr) {
            minPtr = rawData + i;
        }

        if (*(rawData + i) > *maxPtr) {
            maxPtr = rawData + i;
        }
    }

    // Give addresses back to caller
    *outMin = const_cast<int*>(minPtr);
    *outMax = const_cast<int*>(maxPtr);

    return true;
}


int main() {

    int packet[] = {45, 12, 67, 8, 55, 31};

    int* minPtr = nullptr;
    int* maxPtr = nullptr;

    if (parsePacket(packet, 6, &minPtr, &maxPtr)) {

        cout << "Calibration Min : " << *minPtr << endl;
        cout << "Calibration Max : " << *maxPtr << endl;
    }

    return 0;
}

