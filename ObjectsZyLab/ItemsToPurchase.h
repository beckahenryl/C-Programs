#include <iostream>
#include "ItemToPurchase.h"
using namespace std;
/*
Default constructor
Public class functions (mutators & accessors)
SetName() & GetName() (2 pts)
SetPrice() & GetPrice() (2 pts)
SetQuantity() & GetQuantity() (2 pts)
Private data members
string itemName - Initialized in default constructor to "none"
int itemPrice - Initialized in default constructor to 0
int itemQuantity - Initialized in default constructor to 0

*/

//default constructor
ItemToPurchase::ItemToPurchase(){
	itemName = "none";
	itemPrice = 0;
	itemQuantity = 0;
}

void ItemToPurchase::SetName(string name){
	itemName = name;
}

string ItemToPurchase::GetName() const{
	return itemName;
}

void ItemToPurchase::SetPrice(int price){
	itemPrice = price;
}

int ItemToPurchase::GetPrice() const{
	return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
	itemQuantity = quantity;
}
int ItemToPurchase::GetQuantity() const{
	return itemQuantity;
}
