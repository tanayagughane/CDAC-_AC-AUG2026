//============================================================================
// Name        : Problem7.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//================================================

#include <iostream>

using namespace std;

int main() {

    int statusReg = 0b10110001;
    int controlReg = 0b00000000;
    int dataReg = 0b11001010;


    // ------------------------------------------------
    // 1. const int* regPtr1
    // Pointer can move, but value cannot be changed.
    // ------------------------------------------------

    const int* regPtr1 = &statusReg;

    cout << "Status Register : " << *regPtr1 << endl;

    // *regPtr1 = 10;
    // ERROR: Cannot change value through const int*.

    regPtr1 = &dataReg;
    // This is allowed because pointer itself is NOT const.


    // ------------------------------------------------
    // 2. int* const regPtr2
    // Pointer address cannot change,
    // but value can be changed.
    // ------------------------------------------------

    int* const regPtr2 = &controlReg;

    cout << "Control Register Before : "
         << *regPtr2 << endl;

    *regPtr2 = 25;

    cout << "Control Register After  : "
         << *regPtr2 << endl;

    // regPtr2 = &dataReg;
    // ERROR: Cannot change address because pointer is const.


    // ------------------------------------------------
    // 3. const int* const regPtr3
    // Neither value nor address can be changed.
    // ------------------------------------------------

    const int* const regPtr3 = &statusReg;

    cout << "Status Register : "
         << *regPtr3 << endl;

    // *regPtr3 = 20;
    // ERROR: Cannot change value.

    // regPtr3 = &dataReg;
    // ERROR: Cannot change address.


    return 0;
}


