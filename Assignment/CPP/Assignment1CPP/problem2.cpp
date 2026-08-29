//============================================================================
// Name        : Problem2.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){

    int N;

    cout << "Readings entered : ";
    cin >> N;

    if (1 <= N && N <= 100) {

        double arr[N];

        cout << "Enter " << N << " readings: ";

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int skip = 0;
        int validCount = 0;

        cout << "Valid readings   : ";

        for (int i = 0; i < N; i++) {

            if (arr[i] < 0) {
                skip++;
                continue;
            }

            cout << arr[i] << " ";
            validCount++;
        }

        cout << endl;

        cout << "Skipped (errors) : " << skip << endl;

        // First CRITICAL reading
        for (int i = 0; i < N; i++) {

            if (arr[i] >= 45) {
                cout << "First CRITICAL   : Index " << i
                     << " -> " << arr[i] << " C" << endl;
                break;
            }
        }

        // Min, Max and Average
        double sum = 0;
        double min = 0;
        double max = 0;

        bool firstValid = true;

        for (int i = 0; i < N; i++) {

            if (arr[i] < 0) {
                continue;
            }

            sum = sum + arr[i];

            if (firstValid) {
                min = arr[i];
                max = arr[i];
                firstValid = false;
            }
            else {
                if (arr[i] < min) {
                    min = arr[i];
                }

                if (arr[i] > max) {
                    max = arr[i];
                }
            }
        }

        double average = sum / validCount;

        cout << "Min : " << min << " C" << endl;
        cout << "Max : " << max << " C" << endl;
        cout << "Avg : " << average << " C" << endl;

        // Category count
        int normal = 0;
        int warning = 0;
        int critical = 0;
        int shutdown = 0;

        for (int i = 0; i < N; i++) {

            if (arr[i] < 0) {
                continue;
            }

            if (arr[i] >= 0 && arr[i] <= 29) {
                normal++;
            }
            else if (arr[i] >= 30 && arr[i] <= 44) {
                warning++;
            }
            else if (arr[i] >= 45 && arr[i] <= 59) {
                critical++;
            }
            else {
                shutdown++;
            }
        }

        cout << "Normal : " << normal << endl;
        cout << "Warning : " << warning << endl;
        cout << "Critical : " << critical << endl;
        cout << "Shutdown : " << shutdown << endl;

    }
    else {
        cout << N << ": N is Invalid";
    }

    return 0;
}
