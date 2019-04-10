#ifndef PHARMACY_HPP_INCLUDED
#define PHARMACY_HPP_INCLUDED
#include <string>
#include <iostream>

using namespace std;

const int NUM_MEDICATIONS = 3;
const std::string medications_in_stock[NUM_MEDICATIONS] = {"Mekamibeta", "Stawpsdacauf", "Idontwananoes"};

// @brief checks the invitory for available medications
//
// @params
//	medication - the prescribed medication name
//
// @return bool - true: in stock
//		  false : out of stock
bool InStock (const std::string& medication);
// @brief checks if the medication is ok for the patient to take
//
// @params
//	in medication - the prescribed medication name
//	in age - the patient's age in whole years
//	in weight - the patient's weight in kilograms
//
// @return bool - true: medication is ok to give to patient
bool OkToAdminister (const std::string& medication, int age, double weight);
// @brief calculates the dosage to give the patient
//
// @params
//	in medication - the prescribed medication name
//	in weight - the patient's weight in kilograms
//
// @return int - the medication dosage in milligrams
double Dosage(const std::string& medication, double weight);
// @brief puts together patient and medicine information for labeling
//
// @params
//	in medication - the prescribed medication name
//	in name - the patient's name
//	in weight - the patient's weight in kilograms
//	out weight - the completed label
void MakeLabel(const std::string& medication, const std::string& name, double weight, std::string& label);

#endif // PHARMACY_HPP_INCLUDED


