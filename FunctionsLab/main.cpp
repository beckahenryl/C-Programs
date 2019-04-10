#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "pharmacy.hpp"
#include "pharmacy.cpp"

using namespace std;

// This is your Pharmacy application driver
int main()
{
    string patientName, patientMedication, labelString;;
    double patientWeight;
    int patientAge;

    cout << "Please enter the patient's name:" << endl;

    getline(cin, patientName);

    cout << "Please enter the patient's age in years:" << endl;
    cin >> patientAge;

    cout << "Please enter the patient's weight in kgs:" << endl;
    cin >> patientWeight;

    cout << "Please enter the patient's perscribed medication:" << endl;
    cin.ignore();
    getline(cin, patientMedication);



    InStock(patientMedication);
    OkToAdminister(patientMedication, patientAge, patientWeight);
    MakeLabel(patientMedication, patientName, patientWeight, labelString);


    return 0;
}
