#include "pharmacy.hpp"
using namespace std;

// @brief checks the invitory for available medications
//
// @params
//	medication - the prescribed medication name
//
// @return bool - true: in stock
//		  false : out of stock
/* InStock definition */
bool InStock (const string& medication){
    bool stock = false;

    if (medication == medications_in_stock[0]){
        stock = true;
    }
    else if (medication == medications_in_stock[1]){
        stock = true;
    }
    else if (medication == medications_in_stock[2]){
        stock = true;
    }

    return stock;
}

// @brief checks if the medication is ok for the patient to take
//
// @params
//	in medication - the prescribed medication name
//	in age - the patient's age in whole years
//	in weight - the patient's weight in kilograms
//
// @return bool - true: medication is ok to give to patient
//		  false: medication should not be given to patient
/* OkToAdminister definition */

bool OkToAdminister (const string& medication, int age, double weight){
    bool administer = false;
    if (medication == medications_in_stock[0]){
        administer = true;
    }
    else if (medication == medications_in_stock[1] && age > 1){
        administer = true;
    }
    else if (medication == medications_in_stock[2] && age > 2 && weight > 8.5){
        administer = true;
    }
    else{
        administer = false;
        cout << endl << "Cannot administer medication, please contact the prescribing doctor.";
        exit(0);
    }

    return administer;

}

// @brief calculates the dosage to give the patient
//
// @params
//	in medication - the prescribed medication name
//	in weight - the patient's weight in kilograms
//
// @return int - the medication dosage in milligrams
/* Dosage definition */

int Dosage (const string& medication, double weight){

    int dosageCalculation;


    if (medication == medications_in_stock[1]){
        dosageCalculation = weight;
        }

    cout << dosageCalculation;
    return dosageCalculation;

}

// @brief puts together patient and medicine information for labeling
//
// @params
//	in medication - the prescribed medication name
//	in name - the patient's name
//	out weight - the completed label
//
void MakeLabel(const string& medication, const string& name, double weight, string& label)
{
	const int DOSAGE_STR_LENGTH = 6;
	char dos[DOSAGE_STR_LENGTH];
	snprintf(dos, DOSAGE_STR_LENGTH, "%f", Dosage(medication, weight)); //formats the dosage function
	label = name + "\n" + medication + "\nAt bedtime take " + dos + " mgs.\n";

	cout << endl << label;

}
