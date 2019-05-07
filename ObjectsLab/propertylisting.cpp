#include "propertylisting.hpp"
#include <sstream>

using namespace std;

/* Fill in the class definitions */

//default constructor
PropertyListing::PropertyListing(){
    m_Address = "none";
    m_Price = 0;
    m_Sqft = 0;
    m_Sold = false;

}

//parameterized constructor
PropertyListing::PropertyListing(const std::string address, int price, int sqft, bool sold){
    m_Address = address;
    m_Price = price;
    m_Sqft = sqft;
    m_Sold = sold;
}

//accessors and mutators
void PropertyListing::SetAddress(const std::string address){
    m_Address = address;

}
string PropertyListing::GetAddress()const {
    return m_Address;
}


void PropertyListing::SetPrice(int price){
    m_Price = price;
}

int PropertyListing::GetPrice()const {
    return m_Price;
}

void PropertyListing::SetSqft(int sqft){
    m_Sqft = sqft;
}

int PropertyListing::GetSqft()const {
    return m_Sqft;
}
void PropertyListing::SetSold(bool sold){
    m_Sold = sold;
}

bool PropertyListing::GetSold()const{
    return m_Sold;
}

int PropertyListing::PricePerSqFt()const{

    return m_Price/m_Sqft; //fix this
}
string PropertyListing::ToString() const
{
    stringstream plstream;
    plstream << "\t" << m_Address << "\n\tStatus: " << (!m_Sold ? "For sale" : "Off market");
    plstream << "\n\tPrice $" << m_Price << ": Price per sqft $" << PricePerSqFt();
    plstream << "\n\tEst. sqft: " << m_Sqft;

    return plstream.str();
}
void PropertyListing::OffMarket(){
    SetSold(true);
}
