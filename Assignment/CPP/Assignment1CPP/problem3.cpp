//============================================================================
// Name        : Problem3.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//================================================

#include <iostream>
using namespace std;

int main(){

    double temp[3][3];
     cout<<"temp of 9 rooms: "<<endl;
    // Read temperatures
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            cin >> temp[i][j];

        }
    }

    // Display readings
    cout << " \tRoom1\tRoom2\tRoom3" << endl;

    for(int i = 0; i < 3; i++){

        cout << "Floor " << i + 1 << " : ";

        for(int j = 0; j < 3; j++){

            cout << temp[i][j] << "\t";

        }

        cout << endl;
    }

    // Find hottest room
    double hottest = temp[0][0];

    int hotFloor = 0;
    int hotRoom = 0;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            if(temp[i][j] > hottest){

                hottest = temp[i][j];

                hotFloor = i;
                hotRoom = j;
            }
        }
    }

    cout << "Hottest Room : Floor " << hotFloor + 1  << ", Room " << hotRoom + 1 << " -> " << hottest << " \u00B0C" << endl;


    // Find floor with highest average
    double highestAverage = 0;
    int highestFloor = 0;

    for(int i = 0; i < 3; i++){

        double sum = 0;

        for(int j = 0; j < 3; j++){

            sum = sum + temp[i][j];

        }

        double average = sum / 3;

        if(average > highestAverage){

            highestAverage = average;
            highestFloor = i;

        }
    }

    cout << "Hottest Floor : Floor " << highestFloor + 1 << " (avg " << highestAverage << " \u00B0C)" << endl;


    // Count rooms at or above WARNING temperature
    int warningRooms = 0;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            if(temp[i][j] >= 30){

                warningRooms++;

            }
        }
    }

    cout << "Rooms at WARNING or above : " << warningRooms << endl;


    return 0;
}
