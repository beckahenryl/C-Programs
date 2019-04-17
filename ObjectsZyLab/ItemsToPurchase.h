/*
Command to be used: g++ main.cpp ItemToPurchase.cpp -Wall -o a.out
*/

#ifndef ItemToPurchase_H
#define ItemToPurchase_H

#include <iostream>
#include <string>

using namespace std;

class ItemToPurchase{
	public:
		ItemToPurchase();
		void SetName(string name);
		string GetName() const;
		void SetPrice(int price);
		int GetPrice() const;
		void SetQuantity(int quantity);
		int GetQuantity() const;
	private:
		string itemName;
		int itemPrice;
		int itemQuantity;
};

#endif
