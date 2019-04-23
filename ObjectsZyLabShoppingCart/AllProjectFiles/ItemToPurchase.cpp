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
	itemDescription = "none";
	itemPrice = 0;
	itemQuantity = 0;
}

/*
Extend the ItemToPurchase class per the following specifications:

Parameterized constructor to assign item name, item description, item price, and item quantity (default values of 0). (1 pt)
Public member functions
SetDescription() mutator & GetDescription() accessor (2 pts)
PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
PrintItemDescription() - Outputs the item name and description
Private data members
string itemDescription - Initialized in default constructor to "none"


*/

//parameterized constructor
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity){
	itemName = name;
	itemDescription = description;
	itemPrice = price;
	itemQuantity = quantity;

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

//SetDescription() mutator & GetDescription() accessor (2 pts)
void ItemToPurchase::SetDescription(string description){
	itemDescription = description;
}

string ItemToPurchase::GetDescription() const{
	return itemDescription;
}

//PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
//Bottled Water 10 @ $1 = $10
void ItemToPurchase::PrintItemCost(string name, int quantity, int price, int subtotalPrice){

	cout << name << " " << quantity << " @ $" << price << " = $" << subtotalPrice << endl;
}
//PrintItemDescription() - Outputs the item name and description
//Bottled Water: Deer Park, 12 oz.
void ItemToPurchase::PrintItemDescription(string name, string description){

	cout << name << ": " << description << "." << endl;
}
