#include <cassert>
#include <iostream>
#include "pharmacy.hpp"
#include "pharmacy.cpp"

// Driver for testing the pharmacy functions
int main()
{
	cout << "Testing Pharmacy APIs" << endl;
    assert(NUM_MEDICATIONS == 3); //pass
    assert(medications_in_stock[0] == "Mekamibeta"); //pass
    assert(medications_in_stock[1] == "Stawpsdacauf"); //pass
    assert(medications_in_stock[2] == "Idontwananoes"); //pass
    //assert(medications_in_stock[0] == "ibuprophen"); //fail

	// At least 4 test vectors
	cout << "\tTesting InStock" << endl;
    assert(InStock("Mekamibeta") == true);   //pass
    assert(InStock("Stawpsdacauf") == true); //pass
    assert(InStock("Idontwananoes") == true);//pass
    assert(InStock("ibuprophen") == false);  //pass
	// At least 6 test vectors
	cout << "\tTesting OkToAdminister" << endl;

    assert(OkToAdminister("Mekamibeta", 24, 8.5) == true); //pass
    assert(OkToAdminister("Stawpsdacauf", 10, 25) == true); //pass
    assert(OkToAdminister("Stawpsdacauf", 2, 8.5) == true); //pass
    assert(OkToAdminister("Idontwananoes", 30, 57) == true); //pass
    assert(OkToAdminister("Idontwananoes", 3, 8.5) == true); //pass
    assert(OkToAdminister("Idontwananoes", 4, 8.5) == true); //pass

	// At least 6 test vectors
	cout << "\tTesting Dosage" << endl;
    assert(Dosage("Mekamibeta", 8.4) == 2.5); //pass
    assert(Dosage("Mekamibeta", 8.6) == 4.3); //pass
    assert(Dosage("Mekamibeta", 8.5) == 4.25); //pass
    assert(Dosage("Mekamibeta", 44) == 22.00); //pass
    assert(Dosage("Mekamibeta", 45) == 23.00); //pass
    assert(Dosage("Stawpsdacauf", 8.5) == 8.5); //pass
    assert(Dosage("Stawpsdacauf", 50) == 50); //pass
    assert(Dosage("Idontwananoes", 8.5) == 4.75); //pass
	// At least 1 test vector
	cout << "\tTesting MakeLabel" << endl;
	string label, medication, name;
	double weight;
    MakeLabel(medication, name, weight, label); //testing parameters of the void function

}

