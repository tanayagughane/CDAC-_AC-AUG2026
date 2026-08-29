//============================================================================
// Name        : Problem6.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//================================================

#include <iostream>
#include <cmath>

using namespace std;


// Calculate RMS
double computeRMS(double* signal, int n) {

    double sum = 0;

    for (int i = 0; i < n; i++) {

        sum = sum + (*(signal + i) * *(signal + i));
    }

    return sqrt(sum / n);
}


// Normalize array
void normalise(double* signal, int n) {

    double maxValue = 0;

    // Find maximum absolute value
    for (int i = 0; i < n; i++) {

        if (fabs(*(signal + i)) > maxValue) {

            maxValue = fabs(*(signal + i));
        }
    }

    // Divide every element by maximum value
    for (int i = 0; i < n; i++) {

        *(signal + i) = *(signal + i) / maxValue;
    }
}


// Count zero crossings
int countZeroCrossings(double* signal, int n) {

    int count = 0;

    for (int i = 0; i < n - 1; i++) {

        if ((*(signal + i) < 0 && *(signal + i + 1) > 0) ||
            (*(signal + i) > 0 && *(signal + i + 1) < 0)) {

            count++;
        }
    }

    return count;
}


// Apply gain
void applyGain(double* signal, int n, double gainFactor) {

    for (int i = 0; i < n; i++) {

        *(signal + i) = *(signal + i) * gainFactor;
    }
}


// Print array
void printArray(double* signal, int n) {

    for (int i = 0; i < n; i++) {

        cout << *(signal + i) << " ";
    }

    cout << endl;
}


int main() {

    // Test signal
    double signal[] = {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};

    int n = 7;

    cout << "Original Signal : ";
    printArray(signal, n);


    // Calculate RMS
    double rms = computeRMS(signal, n);

    cout << "RMS : " << rms << endl;


    // Count zero crossings
    int crossings = countZeroCrossings(signal, n);

    cout << "Zero Crossings : " << crossings << endl;


    // Normalise
    normalise(signal, n);

    cout << "After Normalise : ";
    printArray(signal, n);


    // Apply gain
    applyGain(signal, n, 2.0);

    cout << "After Gain : ";
    printArray(signal, n);


    return 0;
}

