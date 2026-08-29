#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int temp[3][3];

    cout << "Enter temperatures for all 9 rooms: " << endl;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> temp[i][j];
        }
    }

    // cout << "The readings are: ";

    cout << "       "
         << setw(8) << "Room1"
         << setw(8) << "Room2"
         << setw(8) << "Room3"
         << endl;

    // cout << "\nRoom1 Room2 Room3\n";

    for (int i = 0; i <= 2; i++)

    {
        cout << "floor" << (i + 1) << " : " << " ";
        for (int j = 0; j <= 2; j++)
        {
            cout << temp[i][j] << "        ";
        }

        cout << endl;
    }
    ///
    double hottest = temp[0][0]; // 10 20 30
    int hotfloor = 0;
    int hotroom = 0;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (temp[i][j] > hottest)
            {
                hottest = temp[i][j];
                hotfloor = i + 1; // +1 to output human-readable Floor 1, 2, 3
                hotroom = j + 1;  // +1 to output human-readable Room 1, 2, 3
            }
        }
    }
    cout << "The hottest temp is in room: " << hottest << endl;
    cout << "the hottest floor number is: " << hotfloor << endl;
    cout << "The hottest room number is: " << hotroom << endl;

    double highestAverage = 0;
    int hottestFloor = 0;

    for (int i = 0; i <= 2; i++)
    {
        double sum = 0;
        for (int j = 0; j <= 2; j++)
        {
            sum = sum + temp[i][j];
        }

        double avg = sum / 3;

        if (avg > highestAverage)
        {
            highestAverage = avg;
            hottestFloor = i;
        }
    }
    cout << "Highest Average: " << highestAverage << endl;
    cout << "hottest Floor is: Floor " << hottestFloor + 1 << endl;

    int count = 0;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (temp[i][j] >= 30)
            {
                count++;
            }
        }
    }

    cout << "The count of total rooms above warning are: " << count;

    return 0;
}
