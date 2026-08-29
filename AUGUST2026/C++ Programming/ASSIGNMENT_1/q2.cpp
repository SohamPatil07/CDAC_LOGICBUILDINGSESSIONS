#include <iostream>
using namespace std;

int main()
{
    int n;
    double arr[100];

    int skipped = 0;

    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

 
    cout << "Enter number of readings: ";
    cin >> n;

  
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << "Valid readings : ";

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            skipped++;
            continue;
        }

        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Skipped (errors) : " << skipped << endl;



    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 45)
        {
            cout << "First CRITICAL : Index "
                 << i << endl;

            break;
        }
    }


    double min = arr[0];
    double max = arr[0];
    double sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            continue;
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }

        sum = sum + arr[i];
        count++;
    }

    double average = sum / count;


   
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            continue;
        }

        if(arr[i] <= 29)
        {
            normal++;
        }
        else if(arr[i] <= 44)
        {
            warning++;
        }
        else if(arr[i] <= 59)
        {
            critical++;
        }
        else
        {
            shutdown++;
        }
    }


   
    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;
    cout << "Avg : " << average << endl;

    cout << "Normal: " << normal << endl;
    cout << "Warning: " << warning << endl;
    cout << "Critical: " << critical << endl;
    cout << "Shutdown: " << shutdown << endl;

    return 0;
}