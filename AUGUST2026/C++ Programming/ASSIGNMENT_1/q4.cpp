#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{

    // we need to run the program and the program should start with the 4 arguments already print on the command line.If not the program should return an error.
    // the 4 arguments are 1. ./sensor_monitor , 2. 30 , 3. 45 , 4. 10

    if (argc < 4)
    {
        cout << "Usage : ./sensor_monitor" << endl;
        cout << "Error: Missing arguments.";

        return 1;
    }

    // converts default command line arguments which are sent as text into integers --> atoi
    int warn = atoi(argv[1]);
    int critical = atoi(argv[2]);
    int num_readings = atoi(argv[3]);

    if (warn >= critical)
    {
        cout << "error: Warning threshold should be less than critical threshold" << endl;

        return 1;
    }

    if (num_readings < 1 || num_readings > 500)
    {
        cout << "error: Number of readings must be between 1 and 500" << endl;

        return 1;
    }

    cout << "Warn= " << warn << endl;
    cout << "Critical= " << critical << endl;
    cout << "Readings= " << num_readings << endl;

    //Initialize all the counters for each category.
    int normal = 0;
    int warning = 0;
    int criticalCount = 0;
    int shutdown = 0;

    // makes random numbers different each time the program runs.
    srand(time(0));


    // Generate temperature readings using rand() and check which category it belongs to.
    for (int i = 0; i < num_readings; i++)
    {
        int temperature = rand() % 70;

        if (temperature < warn)
        {
            normal++;
        }
        else if (temperature < critical)
        {
            warning++;
        }
        else if (temperature < 60)
        {
            criticalCount++;
        }
        else
        {
            shutdown++;
        }
    }

    //print the final categories
    cout << "results: " << endl;

    cout << "Normal: " << normal << endl;
    cout << "Warning: " << warning << endl;
    cout << "Critical: " << criticalCount << endl;
    cout << "Shutdown: " << shutdown << endl;

    return 0;
}

