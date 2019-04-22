/*

command to run:

g++ ItemToPurchase.cpp main.cpp ShoppingCart.cpp -Wall -o a.out


Create three new files:

ShoppingCart.h - Class declaration
ShoppingCart.cpp - Class definition
main.cpp - main() function (Note: main()'s functionality differs from the warm up)


Build the ShoppingCart class with the following specifications. Note: Some can be function stubs (empty functions) initially, 
to be completed in later steps.

Default constructor
Parameterized constructor which takes the customer name and date as parameters (1 pt)
Private data members
string customerName - Initialized in default constructor to "none"
string currentDate - Initialized in default constructor to "January 1, 2016"
vector < ItemToPurchase > cartItems
Public member functions
GetCustomerName() accessor (1 pt)
GetDate() accessor (1 pt)
AddItem()
Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
RemoveItem()
Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
If item name cannot be found, output this message: Item not found in cart. Nothing removed.
ModifyItem()
Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. Does not return anything.
If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. If not, modify item in cart.
If item cannot be found (by name) in cart, output this message: Item not found in cart. Nothing modified.
GetNumItemsInCart() (2 pts)
Returns quantity of all items in cart. Has no parameters.
GetCostOfCart() (2 pts)
Determines and returns the total cost of items in cart. Has no parameters.
PrintTotal()
Outputs total of objects in cart.
If cart is empty, output this message: SHOPPING CART IS EMPTY
PrintDescriptions()
Outputs each item's description.
*/


#ifndef ShoppingCart_H
#define ShoppingCart_H

#include <iostream>
#include <string>
#include <vector>

#include "ItemToPurchase.h"


/*
Default constructor
Parameterized constructor which takes the customer name and date as parameters (1 pt)
Private data members

string customerName - Initialized in default constructor to "none"
string currentDate - Initialized in default constructor to "January 1, 2016"
vector < ItemToPurchase > cartItems

*/


class ShoppingCart{
	public:
		ShoppingCart();
		ShoppingCart(string customer, string date);

		//accessors
		string GetCustomerName() const;
		string GetDate() const;

		//member functions

		//Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
		void AddItem(ItemToPurchase object);

		//Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
		//If item name cannot be found, output this message: Item not found in cart. Nothing removed.
		void RemoveItem(string name);

		/*
		Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. Does not return anything.
		If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. 
		If not, modify item in cart.
		If item cannot be found (by name) in cart, output this message: Item not found in cart. Nothing modified.
		*/
		void ModifyItem(ItemToPurchase object);

		//Returns quantity of all items in cart. Has no parameters.
		int GetNumItemsInCart() const;

		//Determines and returns the total cost of items in cart. Has no parameters.
		int GetCostOfCart() const;

		//Outputs total of objects in cart.
		//If cart is empty, output this message: SHOPPING CART IS EMPTY
		void PrintTotal();

		//Outputs each item's description.
		void PrintDescriptions();

		
	private:
		string customerName;
		string currentDate;
		vector <ItemToPurchase> cartItems;
		
};

#endif


