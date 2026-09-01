#include <iostream>
using namespace std;

class Patient
{
private:
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;

public:
    // void PatientInfo(int p , string n , int a);
    //     :patientId(p),name(n),age(a);
    // {
    Patient()
        : patientId(0), name("Soham"), age(23), ward("general"), bloodGroup("O+")
    {
        cout << "Default Patient registered: " << endl;
    }

    Patient(int id, const string &name)
        : patientId(id), name(name), age(23), ward("Emergency"), bloodGroup("O+")
    {
        cout << "Emergency Constructor registered: " << endl;
    }

    Patient(int id, const string &name, int age, const string &ward, const string &bg)
        : patientId(id), name(name), age(age), ward(ward), bloodGroup(bg)
    {
        cout << "Full Admission Constructor: " << endl;
    }

    void displayRecord() const
    {
        cout << "Patient Record" << endl;
        cout << "PatientID: " << patientId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Ward: " << ward << endl;
        cout << "BloodGroup: " << bloodGroup << endl;
        cout << endl;
    }

    void transferWard(const string &newWard)
    {
        cout << "ward Transfer: " << name << "-->" << newWard << endl;
        ward = newWard;
    }

    ~Patient()
    {
        cout << "Patient" << name << "Discharged" << endl;
    }
};

int main()
{
    Patient p1;

    Patient p2(1001, "Soham Patil");

    Patient p3(1001, "shravani Adani", 23, "biology", "B+");

    Patient *patients = new Patient[4];

    for (int i = 0; i < 4; i++)
    {
        patients[i].displayRecord();
    }

    p2.transferWard("ICU");

    delete[] patients;

    return 0;
}