#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "pharmacy.hpp"
#include "pharmacy.cpp"

using namespace std;
/*

int Dosage (const string& medication, double weight){
    int returnDosage;
    if (medication == medications_in_stock[0]){ //Mekamibeta
        if (weight < 8.5){
            returnDosage = 2.5;
        }
        else if (weight >= 8.5 && weight < 45){
            returnDosage = 0.5 * weight;
        }
        else if (weight >= 45){
            returnDosage = 23;
        }
    }
    else if (medication == medications_in_stock[1]){ //Stawpsdacauf
        returnDosage = weight;
    }
    else if (medication == medications_in_stock[2]){ //Idontwananoes
        returnDosage = 4.75;
    }
    cout << returnDosage;
    return returnDosage;
}

*/

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
   // Dosage(patientMedication, patientWeight);
    MakeLabel(patientMedication, patientName, patientWeight, labelString);


    return 0;
}
