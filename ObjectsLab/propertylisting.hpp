#ifndef PROPERTYLISTING_HPP
#define PROPERTYLISTING_HPP
#include <string>
//#include <vector>

class PropertyListing
{
	/* Fill in the class declaration */
public:
    PropertyListing();
    PropertyListing(const std::string address, int price, int sqft, bool sold);

    void SetAddress(const std::string address);
    std::string GetAddress() const;

    void SetPrice(int price);
    int GetPrice() const;

    void SetSqft(int sqft);
    int GetSqft() const;

    void SetSold(bool sold);
    bool GetSold() const;

    std::string ToString() const;
    void OffMarket();

    int PricePerSqFt() const;

private:
    int m_Sqft, m_Price;
    bool m_Sold;
    std::string m_Address;


};

#endif // PROPERTYLISTING_HPP
