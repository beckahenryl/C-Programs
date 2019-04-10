#include <cassert>
#include <iostream>
#include "pharmacy.hpp"
#include "pharmacy.cpp"

// Driver for testing the pharmacy functions
int main()
{
	cout << "Testing Pharmacy APIs" << endl;

	// At least 4 test vectors
	cout << "\tTesting InStock" << endl;
    assert(InStock("Mekamibeta") == true);   //pass
    assert(InStock("Stawpsdacauf") == true); //pass
    assert(InStock("Idontwananoes") == true);//pass
    assert(InStock("ibuprophen") == false);  //pass
    assert(InStock("ibuprophen") == true);    //fail
	// At least 6 test vectors
	cout << "\tTesting OkToAdminister" << endl;
    assert(OkToAdminister("Mekamibeta", 24, 8.5) == true); //pass
    assert(OkToAdminister("Stawpsdacauf", 1, 8.5) == false); //pass
    assert(OkToAdminister("Stawpsdacauf", 2, 8.5) == true); //pass
    assert(OkToAdminister("Idontwananoes", 2, 8.5) == false); //pass
    assert(OkToAdminister("Idontwananoes", 3, 8.5) == true); //pass
    assert(OkToAdminister("Idontwananoes", 3, 8.5) == false); //fail
	// At least 6 test vectors
	cout << "\tTesting Dosage" << endl;
    assert(Dosage("Mekamibeta", 8.4) == 2.5); //pass
    assert(Dosage("Mekamibeta", 8.4) == 2.4); //fail
    assert(Dosage("Mekamibeta", 8.5) == 4.25); //pass
    assert(Dosage("Mekamibeta", 44) == 22.00); //pass
    assert(Dosage("Mekamibeta", 45) == 23.00); //pass
    assert(Dosage("Stawpsdacauf", 8.5) == 8.5); //pass
    assert(Dosage("Stawpsdacauf", 50) == 49); //fail
    assert(Dosage("Idontwananoes", 8.5) == 4.75); //pass
	// At least 1 test vector
	cout << "\tTesting MakeLabel" << endl;
	string label;
    assert(MakeLabel("", "", 0.0, "")); //pass
}

