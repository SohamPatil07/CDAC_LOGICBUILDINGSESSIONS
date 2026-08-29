#include <iostream>
using namespace std;
#include <cmath>

double computeRMS(double *signal, int n)
{
    // 1. Square every number

    // 2. Find their average

    // 3. Take square root
    double sum = 0;
    double *ptr = signal; // pointer ptr pointing to the first element in the array

    for (int i = 0; i < n; i++)
    {

        sum += (*ptr) * (*ptr);
        ptr++;
    }

    double rms = sqrt(sum / n);

    return rms;
}

void normalise(double *signal, int n)
{
    // finding largest absolute value

    // make use of fabs() function for it.

    // divide every element by the absolute value.
    // result should be between 1 and -1
    // make all the changes in the original array itself (inplace)
    double maxValue = fabs(*signal);  // makes first element the max element
    for (int i = 0; i < n; i++)
    {
        if (fabs(*(signal + i)) > maxValue)
        {
            maxValue = fabs(*(signal + i));
        }
    }

    // 1.2 max value

    for (int i = 0; i < n; i++)
    {
        *(signal + i) = *(signal + i) / maxValue;  // to normalize the values
    }
}


int countZeroCrossings(double *signal, int n)
{
    // count the number of zero crossings --> that is pair of positive and negative value. ex: 7 and -7
    // make use of *ptr and *(ptr + 1) for comparing
    // we can check if the signs are opposite by multiplying and checking if its value is < 0 .
    // if value < 0 --> negative else --> positive

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (*(signal + i) * *(signal + i + 1) < 0)
        {
            count++;
        }
    }

    return count;
}

void applyGain(double *signal, int n, double gainFactor)
{
    // for (int i = 0; i < n; i++)
    //  {
    //    cout << *(signal + i);
    //  }

    for (int i = 0; i < n; i++)
    {
        *(signal + i) = *(signal + i) * gainFactor;
    }
}

// ptr++ --> move pointer to next element
// *(ptr + i) --> without moving the pointer  //signal[i]  



// test signals --> {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1}  --> n = 7

int main()
{

    double signal[7] = {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};
    int n = 7;

    cout << "Print original array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(signal + i) << " ";
    }

    cout << endl;

    // RMS function called
    double rms = computeRMS(signal, n);
    cout << "RMS: " << rms << endl;

    // Normalize function called
    normalise(signal, n);

    cout << "After normalise:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(signal + i) << " ";
    }

    cout << endl;

    // Count Zero Crossings function called
    int crossings = countZeroCrossings(signal, n);

    cout << "Zero Crossings: " << crossings << endl;

    // Apply gain

    double gainFactor = 2;

    applyGain(signal, n, gainFactor);

    cout << "After gain:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(signal + i) << " ";
    }

    cout << endl;

    return 0;
}

// compute RMS() --> does not modify signal
// normalize()  --> modify the signal
// countzeroCrossings --> does not modify signal
// applyGain --> modify the signal