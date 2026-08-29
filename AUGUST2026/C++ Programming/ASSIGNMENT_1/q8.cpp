#include <iostream>
using namespace std;

bool parsePacket(int *rawData, int size,
                 int **outMin, int **outMax)
{
    // If size <= 0 : return false, leave output pointers unchanged
    // Otherwise : set *outMin to point at the minimum element in rawData
    // set *outMax to point at the maximum element in rawData
    // return true

    // int minIndex = 0;
    // int maxIndex = 0;

    if (size<0){
        return false;
    }

    int *minPtr = &rawData[0];
    int *maxPtr = &rawData[0];

    for (int i = 1; i < size; i++)
    {
        if (rawData[i] < *minPtr)
        {
            minPtr = &rawData[i];
        }
    

        if (*(rawData + i) > *maxPtr)
        {
            maxPtr = (rawData + i);
        }
    }

    *outMin = minPtr;
    *outMax = maxPtr;

    return true;
}



int main()
{

    int packet[] = {45, 12, 67, 8, 55, 31};
    int *minPtr = nullptr;
    int *maxPtr = nullptr;

    if (parsePacket(packet, 6, &minPtr, &maxPtr))
    {
        cout << "Calibration Min : " << *minPtr << endl;
        cout << "Calibration Max : " << *maxPtr << endl;
    }

    return 0;
}



// normally if we access a array using arr[i] it will give a copy and not the original number.

// but in this question we want the original number

// ex: for array = int arr[5] ={23, 45 , 56 , 80 , 78};

// largestPointer
// arr[3]
// = 80