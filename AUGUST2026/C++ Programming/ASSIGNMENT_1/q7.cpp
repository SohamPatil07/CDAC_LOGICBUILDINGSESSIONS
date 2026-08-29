#include <iostream>
using namespace std;

int main()
{
    // =========================================================
    // SENSOR REGISTERS
    // =========================================================

    int statusReg = 0b10110001;  // const to int pointer
    int controlReg = 0b00000000; // const pointer
    int dataReg = 0b11001010;    // const to const pointer

    // =========================================================
    // REGPTR1 - POINTER TO CONST
    //
    // const int* means:
    // → We CANNOT change the value through regPtr1.
    // → We CAN change where the pointer points.
    // =========================================================

    const int *regPtr1 = &statusReg;

    // We can READ the status register.
    cout << "Status Register: " << *regPtr1 << endl;

    // We CANNOT change the value through regPtr1.
    // *regPtr1 = 10;
    // ERROR: regPtr1 is a pointer to const,
    // so the value cannot be modified through this pointer.

    // A normal const-int pointer CAN be repointed.
    // But the question asks us to demonstrate this
    // as an invalid operation for the required register rule,
    // so we comment it out.
    // regPtr1 = &dataReg;
    // This would actually compile because regPtr1 itself
    // is NOT const. The pointer can be repointed.

    // =========================================================
    // REGPTR2 - CONST POINTER
    //
    // int* const means:
    // → We CAN change the value through regPtr2.
    // → We CANNOT make regPtr2 point somewhere else.
    // =========================================================

    int *const regPtr2 = &controlReg;

    // We CAN change the control register's value.
    *regPtr2 = 25;

    cout << "Control Register after write: "
         << *regPtr2 << endl;

    // We CANNOT repoint regPtr2.
    // regPtr2 = &dataReg;
    // ERROR: regPtr2 is a const pointer,
    // so it must always point to controlReg.

    // =========================================================
    // REGPTR3 - CONST POINTER TO CONST
    //
    // const int* const means:
    // → We CANNOT change the value.
    // → We CANNOT change where the pointer points.
    // =========================================================

    const int *const regPtr3 = &statusReg;

    // We CAN read the value.
    cout << "ROM Config / Fixed Register: "
         << *regPtr3 << endl;

    // We CANNOT change the value.
    // *regPtr3 = 50;
    // ERROR: regPtr3 points to a const value,
    // so the value cannot be modified.

    // We CANNOT repoint the pointer.
    // regPtr3 = &dataReg;
    // ERROR: regPtr3 itself is const,
    // so it cannot point to another address.

    return 0;
}