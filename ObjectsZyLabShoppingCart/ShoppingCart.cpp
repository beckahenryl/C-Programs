#include <iostream>
#include "ShoppingCart.h"
#include "ItemToPurchase.cpp"
using namespace std;

//calling original class ItemToPurchase
ItemToPurchase item;

//default constructor
//all private members are initialized to 0 or none
ShoppingCart::ShoppingCart(){
	customerName = "none";
	currentDate = "January 1, 2016"
	vector <ItemToPurchase> cartItems;
}

//parameterized constructor
ShoppingCart::ShoppingCart(string customer, string date){
	customerName = customer;
	currentDate = date;
}

string ShoppingCart::GetCustomerName() const{
	return customerName;
}

string ShoppingCart::GetDate() const{
	return currentDate;
}

//Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
void ShoppingCart::AddItem(std::vector<ItemToPurchase> cartItems){

	cartItems.push_back(item.GetName());
	
}

//Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
//If item name cannot be found, output this message: Item not found in cart. Nothing removed.
void ShoppingCart:: RemoveItem(string name){
	for (int i = 0; i < cartItems.size(); ++i){
		if (cartItems.at(i) == name){
			cartItems.erase(cartItems.begin() + i);
		}
		else {
			cout << "Item not found in cart. Nothing removed." << endl;

		}
	}

}

//

/*
Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. Does not return anything.
If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. 
If not, modify item in cart.
If item cannot be found (by name) in cart, output this message: Item not found in cart. Nothing modified.
*/
void ShoppingCart::ModifyItem(std::vector<ItemToPurchase> cartItems){


}

//Returns quantity of all items in cart. Has no parameters.
int ShoppingCart:: GetNumItemsInCart() const{
	return item.GetQuantity();
}

//Determines and returns the total cost of items in cart. Has no parameters.
int ShoppingCart:: GetCostOfCart(){
	item.GetPrice();
}

/*
PrintTotal() output:

Outputs total of objects in cart.
If cart is empty, output this message: SHOPPING CART IS EMPTY

John Doe's Shopping Cart - February 1, 2016
Number of Items: 8

Nike Romaleos 2 @ $189 = $378
Chocolate Chips 5 @ $3 = $15
Powerbeats 2 Headphones 1 @ $128 = $128

Total: $521

*/

ShoppingCart::PrintTotal(){

}


/*
PrintDescriptions() output:

Outputs each item's description.

John Doe's Shopping Cart - February 1, 2016

Item Descriptions
Nike Romaleos: Volt color, Weightlifting shoes
Chocolate Chips: Semi-sweet
Powerbeats 2 Headphones: Bluetooth headphones

*/

ShoppingCart::PrintDescriptions(){

}
