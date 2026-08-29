//============================================================================
// Name        : Problem9.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//================================================


#include <iostream>
#include <cmath>

using namespace std;


// 1. Distance between two points
inline double distanceBetween(double x1, double y1,
                              double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


// 2. Convert degree into radians
inline double toRadians(double degrees)
{
    return degrees * (M_PI / 180.0);
}


// 3. Keep value between minimum and maximum
inline double clamp(double value, double minVal, double maxVal)
{
    if (value < minVal)
    {
        return minVal;
    }

    if (value > maxVal)
    {
        return maxVal;
    }

    return value;
}


// 4. Check point is inside safe zone or not
inline bool isInSafeZone(double x, double y,
                         double cx, double cy,
                         double radius)
{
    double distance = distanceBetween(x, y, cx, cy);

    return distance <= radius;
}


int main()
{
    // Home position
    double homeX = 0.0;
    double homeY = 0.0;

    // Safe zone radius
    double safeRadius = 50.0;


    // Waypoint 1
    double x1 = 30.0;
    double y1 = 40.0;

    // Waypoint 2
    double x2 = 60.0;
    double y2 = 20.0;

    // Waypoint 3
    double x3 = 10.0;
    double y3 = 20.0;


    // Waypoint 1
    double distance1 = distanceBetween(homeX, homeY, x1, y1);

    cout << "Waypoint 1 : Distance = "
         << distance1 << endl;

    cout << "Inside Safe Zone : "
         << (isInSafeZone(x1, y1, homeX, homeY, safeRadius)
             ? "Yes" : "No") << endl;


    // Waypoint 2
    double distance2 = distanceBetween(homeX, homeY, x2, y2);

    cout << "Waypoint 2 : Distance = "
         << distance2 << endl;

    cout << "Inside Safe Zone : "
         << (isInSafeZone(x2, y2, homeX, homeY, safeRadius)
             ? "Yes" : "No") << endl;


    // Waypoint 3
    double distance3 = distanceBetween(homeX, homeY, x3, y3);

    cout << "Waypoint 3 : Distance = "
         << distance3 << endl;

    cout << "Inside Safe Zone : "
         << (isInSafeZone(x3, y3, homeX, homeY, safeRadius)
             ? "Yes" : "No") << endl;


    // Test toRadians
    cout << "90 degrees in radians : "
         << toRadians(90) << endl;


    // Test clamp
    cout << "Clamp 75 between 0 and 50 : "
         << clamp(75, 0, 50) << endl;


    return 0;
}
