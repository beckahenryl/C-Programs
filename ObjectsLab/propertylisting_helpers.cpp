#include <iostream>
#include "propertylisting_helpers.hpp"

using namespace std;

void print_prompt()
{
    cout << "1) Add a property for sale" << endl;
    cout << "2) Take property off the market" << endl;
    cout << "3) Get property averages" << endl;
    cout << "4) Get property maxes" << endl;
    cout << "5) List properties" << endl;
}

void print_listings(const vector<PropertyListing>& listings)//changing this helper function
{
    /* Fill in the function body */
    cout << endl;
    if (listings.empty()){
        cout << "No properties available" << endl << endl << endl;
    }
    else{
        int i = 1;
        for(PropertyListing listing : listings){
            cout << i++ << listing.ToString() << endl << endl;
        }
    }
}

void print_averages(const vector<PropertyListing>& listings)
{
    if(listings.empty())
    {
        cout << "\nNo properties available\n " << endl;
    }
    else
    {
        int listPriceSum = 0;
        int sqftSum = 0;
        int pricePerSqftSum = 0;
        for(PropertyListing listing : listings)
        {
            listPriceSum += listing.GetPrice();
            sqftSum += listing.GetSqft();
            pricePerSqftSum += listing.PricePerSqFt();
        }
        cout << "\n\tAvg. List Price $" << listPriceSum/listings.size() << endl;
        cout << "\tAvg. Sqft " << sqftSum/listings.size() << endl;
        cout << "\tAvg. Price per Sqft $" << pricePerSqftSum/listings.size() << endl;
        cout << endl;
    }
}

void print_maxes(const vector<PropertyListing>& listings)//changing this helper function
{
     if(listings.empty())
    {
        cout << "\nNo properties available\n " << endl;
        return;
    }

    int maximum = 0;

    cout << "Max Price:" << endl;
    for(unsigned int i = 0; i < listings.size(); ++i){
            if(listings.at(maximum).GetPrice() < listings.at(i).GetPrice())
                maximum = i;
    } // at the end of the loop, maximum will be the index of the largest priced listing
    cout << listings.at(maximum).ToString() << endl;
    cout << endl;

    maximum = 0;
    cout << "Max Sqft:" << endl;
    for(unsigned int i = 0; i < listings.size(); ++i){
            if(listings.at(maximum).GetSqft() < listings.at(i).GetSqft())
                maximum = i;
    } // at the end of the loop, maximum will be the index of the largest sqft listing
    cout << listings.at(maximum).ToString() << endl;
    cout << endl;

    maximum = 0;
    cout << "Max Price per sqft:" << endl;
    for(unsigned int i = 0; i < listings.size(); ++i){
            if(listings.at(maximum).PricePerSqFt() < listings.at(i).PricePerSqFt())
                maximum = i;
    } // at the end of the loop, maximum will be the index of the largest sqft listing
    cout << listings.at(maximum).ToString() << endl;
    cout << endl;
}

void add_listing(const string& address, int price, //complete
                 int sqft, vector<PropertyListing>& listings)
{
    /* Fill in the function body */

    PropertyListing object;

    object.SetAddress(address);
    object.SetPrice(price);
    object.SetSqft(sqft);
    object.GetAddress();
    object.GetPrice();
    object.GetSqft();

    listings.push_back(object);


}

