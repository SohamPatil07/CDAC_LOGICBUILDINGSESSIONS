#include <iostream>
#include <cmath>
using namespace std;


// inline is a request/ suggestion to the compiler , not a command

// the compiler decides whether actually to inline it.

// inline functions are used to be as small helper functions that may be called frequently.

inline double distanceBetween(double x1, double y1, double x2, double y2){

        return sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
}

// converting degrees to radians

// formula : radians = degrees * 3.14 / 180

inline double toRadians(double degrees){

        return degrees * (M_PI / 180.0);
}

inline double clamp(double value, double minVal, double maxVal){

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

inline bool isInSafeZone(double x, double y,
                         double cx, double cy, double radius)
{
    double distance = distanceBetween(x, y, cx, cy);

    return distance <= radius;
}






int main(){
    // Home position
    double homeX = 0.0;
    double homeY = 0.0;

    // Safe-zone radius
    double radius = 50.0;


    // Three waypoints
    double x1 = 30.0;
    double y1 = 40.0;

    double x2 = 60.0;
    double y2 = 20.0;

    double x3 = 10.0;
    double y3 = 20.0;


    // ---------------------------------------------------------
    // WAYPOINT 1
    // ---------------------------------------------------------

    double distance1 = distanceBetween(homeX, homeY, x1, y1);
    bool safe1 = isInSafeZone(x1, y1, homeX, homeY, radius);

    cout << "Waypoint 1" << endl;
    cout << "Distance from home : " << distance1 << endl;

    if (safe1)
    {
        cout << "Inside safe zone" << endl;
    }
    else
    {
        cout << "Outside safe zone" << endl;
    }

    cout << endl;


    // ---------------------------------------------------------
    // WAYPOINT 2
    // ---------------------------------------------------------

    double distance2 = distanceBetween(homeX, homeY, x2, y2);
    bool safe2 = isInSafeZone(x2, y2, homeX, homeY, radius);

    cout << "Waypoint 2" << endl;
    cout << "Distance from home : " << distance2 << endl;

    if (safe2)
    {
        cout << "Inside safe zone" << endl;
    }
    else
    {
        cout << "Outside safe zone" << endl;
    }

    cout << endl;


    // ---------------------------------------------------------
    // WAYPOINT 3
    // ---------------------------------------------------------

    double distance3 = distanceBetween(homeX, homeY, x3, y3);
    bool safe3 = isInSafeZone(x3, y3, homeX, homeY, radius);

    cout << "Waypoint 3" << endl;
    cout << "Distance from home : " << distance3 << endl;

    if (safe3)
    {
        cout << "Inside safe zone" << endl;
    }
    else
    {
        cout << "Outside safe zone" << endl;
    }
    return 0;
}

//inline = a hint that the tool is small/frequently used and may be inserted directly by the compiler instead of making a normal function call.