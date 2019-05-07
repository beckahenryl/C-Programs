#include <iostream>
#include <vector>
#include "propertylisting.hpp"
#include "propertylisting_helpers.hpp"
//#include "propertylisting.cpp"
//#include "propertylisting_helpers.cpp"

using namespace std;

int main()
{
    cout << "Property Listing Database" << endl;
    vector<PropertyListing> listings;

    print_prompt();
    int selection;
    while( cin >> selection)
    {
        switch(selection)
        {
        case 1://done
        {
            cout << "Enter address:" << endl;
            string address;
            cin.ignore();
            getline(cin, address);
            cout << "Enter price:" << endl;
            int price;
            cin >> price;
            cout << "Enter square feet:" << endl;
            int sqft;
            cin >> sqft;
            add_listing(address, price, sqft, listings);
            break;
        }
        case 2:
        {
            print_listings(listings);
            cout << "Enter listing to update:" << endl;
            int listingNumber;
            cin >>  listingNumber;
            PropertyListing& pl = listings.at(listingNumber-1);
            pl.OffMarket();
            break;
        }
        case 3:
            print_averages(listings);
            break;
        case 4://complete the helper function
            print_maxes(listings);
            break;
        case 5://complete helper function
            print_listings(listings);
            break;
        default:
            cout << "Unsupported selection" << endl;
        }
        print_prompt();
    }
}
