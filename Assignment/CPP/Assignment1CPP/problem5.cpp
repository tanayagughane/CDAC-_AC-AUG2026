//============================================================================
// Name        : Problem5.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//================================================

#include <iostream>

using namespace std;


// V1 - Call by Value
void resetSensorPairV1(int reading1, int reading2) {

    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}


// V2 - Call by Reference
void resetSensorPairV2(int& reading1, int& reading2) {

    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}


// V3 - Call by Pointer
void resetSensorPairV3(int* reading1, int* reading2) {

    int temp = *reading1;
    *reading1 = *reading2;
    *reading2 = temp;
}


int main() {

    
    // ---------------- V1 ----------------

    int A = 55;
    int B = 12;

    cout << "--- V1: Call by Value ---" << endl;

    cout << "Before : A=" << A << "  B=" << B << endl;

    resetSensorPairV1(A, B);

    cout << "After  : A=" << A << "  B=" << B  << "    <- values unchanged" << endl;


    // ---------------- V2 ----------------

    cout << endl;

    cout << "--- V2: Call by Reference ---" << endl;

    cout << "Before : A=" << A << "  B=" << B << endl;

    resetSensorPairV2(A, B);

    cout << "After  : A=" << A << "  B=" << B  << "    <- values swapped" << endl;


    // ---------------- V3 ----------------

    cout << endl;

    cout << "--- V3: Call by Pointer ---" << endl;

    cout << "Before : A=" << A << "  B=" << B << endl;

    resetSensorPairV3(&A, &B);

    cout << "After  : A=" << A << "  B=" << B << "    <- values swapped back" << endl;


    return 0;
}


