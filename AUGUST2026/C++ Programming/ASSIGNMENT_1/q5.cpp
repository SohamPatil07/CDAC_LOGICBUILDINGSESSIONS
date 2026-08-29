#include <iostream>
using namespace std;

// call by value
// call by reference
// call by address




// ============================================================
// V1 - CALL BY VALUE
// The function receives COPIES of the original variables.
// Therefore, changes made inside the function do not affect
// the original variables in main().
// ============================================================
void resetSensorPairV1(int reading1, int reading2){
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;

};


// ============================================================
// V2 - CALL BY REFERENCE
// The & means reading1 and reading2 refer to the original
// variables from main(). Therefore, changes made here affect
// the original variables.
// ============================================================
void resetSensorPairV2(int &reading1, int &reading2){
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;

};




// ============================================================
// V3 - CALL BY POINTER
// The function receives the addresses of the original
// variables. The * is used to access the values stored
// at those addresses.
// ============================================================
void resetSensorPairV3(int *reading1, int *reading2){
    int temp = *reading1;
    *reading1 = *reading2;
    *reading2 = temp;

};

int main()
{

    int reading1 = 55;
    int reading2 = 12;

    // Call by Value

    cout << "--- V1: Call by Value ---" << endl;

    cout << "Before : A=" << reading1
         << " B=" << reading2 << endl;

    resetSensorPairV1(reading1, reading2);

    cout << "After  : A=" << reading1
         << " B=" << reading2 << endl;


    // Call by reference

    cout << endl;
    cout << "--- V2: Call by Reference ---" << endl;

    cout << "Before : A=" << reading1
         << " B=" << reading2 << endl;

    resetSensorPairV2(reading1, reading2);

    cout << "After  : A=" << reading1
         << " B=" << reading2 << endl;


    // Call by address

    cout << endl;
    cout << "--- V3: Call by Pointer ---" << endl;

    cout << "Before : A=" << reading1
         << " B=" << reading2 << endl;

    resetSensorPairV3(&reading1, &reading2);

    cout << "After  : A=" << reading1
         << " B=" << reading2 << endl;
    
    return 0;
}